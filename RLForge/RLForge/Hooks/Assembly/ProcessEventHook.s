global ProcessEventHook

.text
ProcessEventHook:
     push %ebp ; Prolog
     mov %esp,%ebp
     sub $0x18,%esp ;Locals
     mov %ecx,-0xc(%ebp) ; Get pCallingObject
     mov %edx,-0x10(%ebp) ; Get edx (unused)
     push $0x1 ; push true
     pushl 0xc(%ebp) ; push void* Params
     pushl 0x8(%ebp) ; push UFunction* Function
     pushl -0xc(%ebp) ; push CallingObject
     call ;EventHandlerFunction;
     add $0x10,%esp ; Clear locals;
     sub $0xc,%esp ; Locals
     pushl 0x10(%ebp) ; Push stuff to old
     pushl 0xc(%ebp) ; Push stuff to old
     pushl 0x8(%ebp) ; Push Stuff to old
     pushl -0x10(%ebp) ; Push Stuff to old;
     pushl -0xc(%ebp) ; Push Stuff to old
     call ;OldCallFunction
     add $0x20,%esp ; Cleanup
     nop ; alignment
     leave ;
     ret $0xC ; Return 12?;
