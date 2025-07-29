// MainCourse.h
// Derived class representing a main course dish

#ifndef MAINCOURSE_H
#define MAINCOURSE_H

#include "MenuItem.h"

// Represents a main course item with an additional side dish
class MainCourse : public MenuItem {
private:
    std::string sideDish; // Name of the side dish

public:
    // Constructor
    MainCourse(const std::string& name, const std::string& temp, const std::string& sideDish);

    // Override display to include side dish
    void display();
};

#endif
