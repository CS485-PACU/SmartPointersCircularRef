//***************************************************************************
// File name:   Item.h
// Author:      chadd williams
// Date:        3/18/2025
// Class:       CS 485
// Assignment:  Smart Pointer Example
// Purpose:     Demonstrate circular references
//***************************************************************************


#pragma once
#include <iostream>
#include <vector>
#include <memory>

class Container;

class Item {

	public:

		Item(std::shared_ptr<Container> pcContainer) : mpcParent(pcContainer) {}

		~Item() { std::cerr<< "~Item()\n";}
		
	private:

		std::shared_ptr<Container> mpcParent;
};