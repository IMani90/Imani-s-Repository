// MenuItem.cpp
// Definitions for MenuItem base class

#include "MenuItem.h"
#include <iostream>

// Constructor definition
MenuItem::MenuItem(const std::string& name, const std::string& temp)
    : name(name), servingTemp(temp) {}

// Displays the name and temperature of the menu item
void MenuItem::display() {
    std::cout << "Dish: " << name << "\n"
              << "Served: " << servingTemp << std::endl;
}
