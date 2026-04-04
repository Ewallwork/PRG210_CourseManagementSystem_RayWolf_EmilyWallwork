#include <iostream>
#include <cstring>
#include "Course.h"

class Cart {
private:
    Course* courses;              // dynamically allocated array of Course objects
    char** schedules;              // dynamically allocated array of C-style strings
    int CartCount;                // number of courses in the cart
    double CartTotalCost;         // total cost before/after calculation

public:
    Cart();                   // default constructor
    ~Cart();                  // destructor

    void AddToCart() const;
    double CalculateCost();        // adds 13% tax and returns total
    void PrintCart() const;        // prints all courses in the cart
};