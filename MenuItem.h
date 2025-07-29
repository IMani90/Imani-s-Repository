// MenuItem.h
// Base class for all menu items

#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>

// Base class representing a generic menu item
class MenuItem {
private:
    std::string name;        // Name of the dish
    std::string servingTemp; // "hot" or "cold"

public:
    // Constructor to initialize dish name and temperature
    MenuItem(const std::string& name, const std::string& temp);

    //  Display function to show basic menu item info
    void display();


};

#endif
