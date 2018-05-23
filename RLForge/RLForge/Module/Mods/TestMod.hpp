#pragma once

#include "../../Meta/TypeErasure.hpp"
#include <iostream>


class TestMod {
public:
 	explicit TestMod(const char* ModuleName)
	{
		this->ModuleName = ModuleName;
	}
	
	void onEnable() const
	{
		std::cout << "TestMod onEnable \n";
	}
	
	void onDisable() const
	{
		std::cout << "TestMod onDisable \n";
	}
	
	void onToggle() const
	{
		std::cout << "TestMod onToggle \n";
	}
	
	void isEnabled() const
	{
		std::cout << "TestMod isEnabled \n";
	}


private:
	const char* ModuleName;
};