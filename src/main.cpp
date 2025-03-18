//***************************************************************************
// File name:   main.cpp
// Author:      
// Date:        
// Class:       
// Assignment:  
// Purpose:     
//***************************************************************************

#include <iostream>
#include <vector> 
#include <string>
#include <sstream>
#include "../include/Container.h"
#include "../include/Item.h"

//***************************************************************************
// Function:    main
//
// Description: Demonstrate Smart Pointer Error
//
// Parameters:  none
//
// Returned:    EXIT_SUCCESS
//***************************************************************************
int main()
{
	auto pcContainer = std::make_shared<Container>();


	for(int x = 0; x < 10; ++x) {
		pcContainer->addItem(std::make_shared<Item> (pcContainer));
	}

	return EXIT_SUCCESS;
}
