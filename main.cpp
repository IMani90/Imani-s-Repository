// main.cpp
// Demonstrates use of inheritance with MenuItem and derived classes

#include <iostream>
#include "Appetizer.h"
#include "MainCourse.h"
#include "Dessert.h"

int main() {
    // Create one object of each derived class using constructor
    Appetizer app("Curry Chicken", "hot", true);
    MainCourse main("Mutton Briyani", "hot", "Salna");
    Dessert dessert("Custard fruit Salad", "cold", true);

    std::cout << "Menu Items:\n\n";

    // Display each menu item using overridden display() method
    app.display();
    main.display();
    dessert.display();

    return 0;
}
