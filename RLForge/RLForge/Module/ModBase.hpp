#pragma once
#include <string_view>
#include <functional>

#include "../Meta/TypeErasure.hpp"

class ModBase {
public:
	void onEnable() const
	{
		TypeErasure::Call([](auto const& Self)
		{
			if(&Self.onEnable)
				std::invoke(&Self.onEnable,Self);
		}, *this);
	}
	
	void onDisable() const
	{
		TypeErasure::Call([](auto const& Self)
		{
			if(&Self.onDisable)
				std::invoke(&Self.onDisable,Self);
	  	},*this);
	}
	
	
	void onToggle() const
	{
		TypeErasure::Call([](auto const& Self)
		{
			if(&Self.onToggle)
				std::invoke(&Self.onToggle,Self);
	  	},*this);
	}
	
	void isEnabled() const
	{
		TypeErasure::Call([](auto const& Self)
		{
			if(&Self.isEnabled)
				std::invoke(&Self.isEnabled,Self);
		},*this);
	}
};

using PolyModuleBase = TypeErasure::Polymorphic<ModBase>;
