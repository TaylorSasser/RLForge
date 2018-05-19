#pragma once

#include <type_traits>
#include <utility>

//Basically A Copy of Boost::TE With a few changes to get it working on visual studio 2017 and the autocomplete;


namespace TypeErasure
{
    namespace Detail
    {

        template<class...>
        struct TypeList {};

        template<class, std::size_t>
        struct TypeMappings
        {
            friend auto Get(TypeMappings);

            template<class T>
            struct Set
            {
                friend auto Get(TypeMappings)
                {
                    return T{};
                }
            };
        };

        template<std::size_t, class...>
        constexpr std::size_t TypeMappingsSizeImpl(...)
        {
            return {};
        }


        template<std::size_t N, class T, class... Ts>
        constexpr auto TypeMappingsSizeImpl(bool DummyValue)
        -> decltype(Get(TypeMappings<T, N>{}), std::size_t{})
        {
            return 1 + TypeMappingsSizeImpl<N + 1, T, Ts...>(DummyValue);
        }

        template<class... Ts>
        constexpr auto TypeMappingSize()
        {
            return TypeMappingsSizeImpl<1, Ts...> (bool{});
        }

        template<class T, class = decltype(sizeof(T))>
        std::true_type IsCompleteImpl(bool);


        template<class>
        std::false_type IsCompleteImpl(...);

        template<class T>
        struct IsComplete : decltype(IsCompleteImpl<T>(bool{})) {};


        template<class T>
        constexpr auto Requires__(bool)
        -> decltype(std::declval<T>().template Requires__<T>()) {};

        template<class>
        constexpr auto Requires__(...)
        -> void {};

        template<class TExpression>
        class ExpressionWrapper final
        {
            static_assert(std::is_empty<TExpression>{});
        public:
            template<class... Ts>
            decltype(auto) operator()(Ts&&... Arguments) const
            {
                return reinterpret_cast<const TExpression&>(*this)(std::forward<Ts>(Arguments)...);
            }
        };



        class TypelessPointer {
        public:
            using PointerType = void*;
            using DeleteType = void(*)(PointerType);
            using CopyType = PointerType(*)(PointerType);

        public:
            TypelessPointer() noexcept = default;

            template<class T>
            constexpr explicit TypelessPointer(
                    T* Instance = nullptr,
                    DeleteType DeleteFunction = [](PointerType Pointer)
                    {
                        delete static_cast<T*>(Pointer);
                    },
                    CopyType CopyFunction = [](PointerType Pointer)
                    {
                        return new T{ *static_cast<T*>(Pointer) };
                    })
            noexcept : Pointer{ Instance }, DeleteRoutine{ DeleteFunction }, CopyRoutine{ CopyFunction } {}

            constexpr TypelessPointer(const TypelessPointer& Other) noexcept
                    : Pointer{ Other.CopyRoutine(Other.Pointer) }, DeleteRoutine{ Other.DeleteRoutine }, CopyRoutine{ Other.CopyRoutine } {}

            constexpr TypelessPointer(TypelessPointer&& Other) noexcept
                    : Pointer{ std::move(Other.Pointer) }, DeleteRoutine{ std::move(Other.DeleteRoutine) }, CopyRoutine{ std::move(Other.CopyRoutine) }
            {
                Other.Pointer = nullptr;
            }

            ~TypelessPointer() noexcept
            {
                Reset();
            }

            constexpr TypelessPointer& operator=(const TypelessPointer& Other) noexcept
            {
                Reset(Other.CopyRoutine(Other.Pointer));
                DeleteRoutine = Other.DeleteRoutine;
                CopyRoutine = Other.CopyRoutine;
                return *this;

            }

            constexpr TypelessPointer& operator=(TypelessPointer&& Other) noexcept
            {
                Reset(std::move(Other.Pointer));
                DeleteRoutine = std::move(Other.DeleteRoutine);
                CopyRoutine = std::move(Other.CopyRoutine);
                Other.Pointer = nullptr;
                return *this;
            }

            constexpr void Reset(PointerType NewInstance = {}) noexcept
            {
                DeleteRoutine(Pointer);
                Pointer = NewInstance;
            }

            constexpr void Reset(PointerType NewInstance, DeleteType NewDeleteRoutine, CopyType NewCopyRoutine)
            {
                Pointer = NewInstance;
                DeleteRoutine = NewDeleteRoutine;
                CopyRoutine = NewCopyRoutine;
            }

            template<class T = void>
            constexpr decltype(auto) Get() const noexcept
            {
                return reinterpret_cast<T*>(Pointer);
            }

        private:
            PointerType Pointer;
            DeleteType DeleteRoutine;
            CopyType CopyRoutine;
        };
    }

    class DynamicStorage
    {
    public:
        template<class T,class TDecay = std::decay_t<T>>
        constexpr explicit DynamicStorage(T&& Instance, Detail::TypelessPointer& Pointer) noexcept
        {
            Pointer.Reset(
                    new TDecay{std::forward<T>(Instance)},
                    [](void* Pointer)
                    {
                        delete static_cast<TDecay*>(Pointer);
                    },
                    [](void* Pointer)
                            -> void*
                    {
                        return new TDecay{ std::move(*static_cast<TDecay*>(Pointer)) };
                    });
        }
    };

    template<std::size_t Size,std::size_t Alignment = 16>
    class LocalStorage
    {
    public:
        template<class T,class TDecay = std::decay_t<T>>
        constexpr explicit LocalStorage(T&& Instance, Detail::TypelessPointer& Pointer) noexcept
        {
            static_assert(sizeof(T) <= Size);
            new (&Data) TDecay{std::forward<T>(Instance)};
            Pointer.Reset(
                    &Data,
                    [](void* Pointer)
                    {
                        static_cast<TDecay*>(Pointer)->~TDecay();
                    },
                    [](void* Pointer)
                            -> void*
                    {
                        return new (Pointer) TDecay{std::move(*static_cast<TDecay*>(Pointer))};
                    });
        }

    private:
        std::aligned_storage<Size, Alignment> Data;
    };

    class StaticVirtualMethodTable
    {
        using PointerType = void*;
    public:
        template<class T,std::size_t Size>
        StaticVirtualMethodTable(T&& Instance, PointerType*& Table, std::integral_constant<std::size_t, Size>) noexcept
        {
            static PointerType VirtualTable[Size]{};
            Table = VirtualTable;
        }
    };
    namespace Detail
    {
        struct PolymorphicBase {
            Detail::TypelessPointer Pointer{};
            Detail::TypelessPointer::PointerType* VPointer{};
        };
    }

    template<class I,class TStorage = DynamicStorage, class TVTable = StaticVirtualMethodTable>
    class Polymorphic : Detail::PolymorphicBase, public std::conditional_t<(Detail::IsComplete<I>{}), I, Detail::TypeList<I>>
    {
    public:
        template<class T, class = std::enable_if_t<!std::is_convertible<std::decay_t<T>, Polymorphic>{}>>
        constexpr Polymorphic(T&& Instance) noexcept
                : Polymorphic {std::forward<T>(Instance), Detail::TypeList<decltype(Detail::Requires__<I>(bool{}))>{}} {}

        constexpr Polymorphic(Polymorphic const&) noexcept = default;
        constexpr Polymorphic(Polymorphic&&) noexcept = default;

        constexpr Polymorphic& operator=(const Polymorphic&) noexcept = default;
        constexpr Polymorphic& operator=(Polymorphic&&) noexcept = default;
    private:
        template<class T,class TRequires>
        constexpr Polymorphic(T&& Instance, const TRequires) noexcept
                : Polymorphic{std::forward<T>(Instance),std::make_index_sequence<Detail::TypeMappingSize<I>()>{}} {}

        template<class T,class TDecay = std::decay_t<T>, std::size_t... Ns>
        constexpr Polymorphic(T&& Instance, std::index_sequence<Ns...>) noexcept
                : Detail::PolymorphicBase{},
                  VTable{std::forward<T>(Instance),VPointer,std::integral_constant<std::size_t,sizeof...(Ns)>{} },
                  Storage{std::forward<T>(Instance),Pointer}

        {
            (Setup<Ns + 1, std::decay_t<T>>(decltype(Get(Detail::TypeMappings<I, Ns + 1>{})){}),...);
        }

        template<std::size_t N,class T,class TExpression, class... Arguments>
        constexpr void Setup(Detail::TypeList<TExpression, Arguments...>) noexcept
        {
            VPointer[N - 1] = reinterpret_cast<void*>(+[](void* Self, Arguments... Args)
            {
                return Detail::ExpressionWrapper<TExpression>{}(*static_cast<T*>(Self), Args...);
            });
        }
        TStorage Storage;
        TVTable VTable;
    };

    namespace Detail
    {
        template<class I,std::size_t N,class R,class TExpression,class... Ts>
        constexpr auto CallImpl(const PolymorphicBase& Self, std::integral_constant<std::size_t, N>, TypeList<R>, const TExpression, Ts&&... Arguments) noexcept
        {
            void(typename TypeMappings<I,N>::template Set<TypeList<TExpression,Ts...>>{});
            return reinterpret_cast<R (*)(void *, Ts...)>(Self.VPointer[N - 1])(Self.Pointer.Get(), std::forward<Ts>(Arguments)...);
        }
    }

    template<class Return = void, std::size_t N = 0,class TExpression,class I ,class... Ts>
    constexpr auto Call(const TExpression& Expression, const I &Interface, Ts&&... Arguments) noexcept
    {
        static_assert(std::is_empty<TExpression>{});
        return Detail::CallImpl<I>(reinterpret_cast<const Detail::PolymorphicBase&>(Interface),
           std::integral_constant<std::size_t,Detail::TypeMappingSize<I, class Call>() + 1> {},
           Detail::TypeList<Return>{}, Expression, std::forward<Ts>(Arguments)...);
    }
}

