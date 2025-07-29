// Appetizer.cpp
// Definitions for Appetizer class

#include "Appetizer.h"
#include <iostream>

// Constructor initializes base class and dip flag
Appetizer::Appetizer(const std::string& name, const std::string& temp, bool dipIncluded)
    : MenuItem(name, temp), dipIncluded(dipIncluded) {}

// Display appetizer details, including dip info
void Appetizer::display() {
    MenuItem::display(); // Call base class display
    std::cout << "Dip Included: " << (dipIncluded ? "Yes" : "No") << "\n" << std::endl;
}
