// Dessert.h
// Derived class representing a dessert item

#ifndef DESSERT_H
#define DESSERT_H

#include "MenuItem.h"

// Represents a dessert item with sugar-free option
class Dessert : public MenuItem {
private:
    bool isSugarFree; // True if dessert is sugar-free

public:
    // Constructor
    Dessert(const std::string& name, const std::string& temp, bool isSugarFree);

    // Override display to show sugar info
    void display();
};

#endif
