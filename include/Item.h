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