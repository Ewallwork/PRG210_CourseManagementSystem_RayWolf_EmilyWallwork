#include "Cart.h"
#include <iostream>
#include <cstring>
using namespace std;

Cart::Cart() {
    courses=nullptr;
    schedules=nullptr;      //setting safe initial values
    CartCount=0;
    CartTotalCost = 0.0;
}

void Cart::AddToCart() const {

}

Cart::~Cart(){
    for (int i =0; i < CartCount; i++) {      //iterating over all the items in the cart
        delete[] schedules[i];                //deleting the dynamically allocated memory
    }
    delete[] schedules;
    delete[] courses;
}

double Cart::CalculateCost() {
    double subtotal=0.0;                    //setting inital value of the cart to 0

    for (int i = 0; i < CartCount; i++) {            //iterating over the number of items in the cart
        subtotal += courses[i].GetCoursePrice();     //adding the price of each item to the subtotal of the cart
    }

    CartTotalCost = subtotal * 1.13;                  //multiplying the subtotal by the tax %
    return CartTotalCost;
} 

void Cart::PrintCart() const{
    for (int i = 0; i<CartCount; i++) {                //iterating over all the items in the cart
        courses[i].Show();                             //showing each item 
    }
}
