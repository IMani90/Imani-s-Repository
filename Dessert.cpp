// Dessert.cpp
// Definitions for Dessert class

#include "Dessert.h"
#include <iostream>

// Constructor initializes base class and sugar-free flag
Dessert::Dessert(const std::string& name, const std::string& temp, bool isSugarFree)
    : MenuItem(name, temp), isSugarFree(isSugarFree) {}

// Display dessert details including sugar-free info
void Dessert::display() {
    MenuItem::display(); // Call base class display
    std::cout << "Sugar Free: " << (isSugarFree ? "Yes" : "No") << "\n" << std::endl;
}
