// Appetizer.h
// Derived class from MenuItem representing an appetizer

#ifndef APPETIZER_H
#define APPETIZER_H

#include "MenuItem.h"

// Represents an appetizer menu item
class Appetizer : public MenuItem {
private:
    bool dipIncluded; // True if dip is included

public:
    // Constructor
    Appetizer(const std::string& name, const std::string& temp, bool dipIncluded);

    // Override display to show extra info
    void display();
};

#endif
