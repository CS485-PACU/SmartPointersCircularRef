
#pragma once	
#include <iostream>
#include <vector>
#include <memory>


class Item;


class Container {

	public:
		Container() {}

		~Container() { std::cerr<< "~Container()\n";}

		void addItem(std::shared_ptr<Item> pcItem) {
			mcItems.push_back(pcItem);
			std::cerr << "addItem()\n";
		}

		std::shared_ptr<Item> getItem(size_t index) const {
			return mcItems.at(index);
		}

	private:
		std::vector<std::shared_ptr<Item>> mcItems;


};