// MainCourse.cpp
// Definitions for MainCourse class

#include "MainCourse.h"
#include <iostream>

// Constructor initializes base class and side dish
MainCourse::MainCourse(const std::string& name, const std::string& temp, const std::string& sideDish)
    : MenuItem(name, temp), sideDish(sideDish) {}

// Display main course details including side
void MainCourse::display() {
    MenuItem::display(); // Call base class display
    std::cout << "Side Dish: " << sideDish << "\n" << std::endl;
}
