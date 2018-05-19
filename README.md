Requires GCC, C++ 17, CMake. I use CLION for my IDE. VS/ VS Code may work fine, not sure.


Rocket league mods Framework? SDK? API? Not sure. 
Do not be stupid enough to use this to make hacks, its easy to detect and that is the point

One day i'll write the stuff required to use this/ Setup Guide.
This is mostly pure C++ and some assembly for hooks.


Dependencies:
Trying to avoid them. 
	-Exeception is Meta/TypeErasure. Does Shady compiler shit I dont understand at all. One day maybe. Meta black magic. 
	-Exeception is Detours. Assembly black magic. Reroutes game functions into the dll. Microsoft makes this for some reason? I may replace with my own later. We will see.
	
Todo list ( No order)

    Implement in better hooking then global hooks. All objects inherit the vtable from the static class CTOR in UClass, (I Think)
    So i can hook that function and use it to swap the of the VTable of the UObject* made at a runtime? Still not sure.
    Make a really cool module system with the TypeErasure.
    IoC and DI would be nice.
    Modules Should have a factory and be tracked.
    Controller support.
    Scaleform hooks / Runtime decompiler 
    Unrealscript Decompiler that accepts a UFunction*.
    
    Reverse more net code, try to move away from using Ingame functions to start lan games.
    Run the game as a headless server with a proper SSH and basic scripts support for custom lobbies.(Will be awhile before this is done)
    Increase the shitty tickrate to 128 Tps.
    Fix all the memory leaks. (@Psyonix SETTING THE ARRAY COUNT TO 0 DOES NOT FREE THE MEMORY!)
    Custom items from UPK / UDK / What ever file format they use for assets.
    
    Add in custom network code that allows for communication with the Application.exe for the Machine Learning People To Request Gamedata
    Basic netcode for IPC (DLL <=> Application)
    
    Maybe add in the SDK Generation tool (The way we get the RL Folder) if its really requested.
    
Some of this is already done in the old repo, and just needs to be rewritten to be better optimized.
