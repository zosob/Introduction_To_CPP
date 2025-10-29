#include<iostream>
#include "point.h"
using namespace std;

// Default constructor...
point::point() : x(0), y(0) {}
/* x = 0; y = 0; */

// Parameterized constructor...
point::point(int x, int y){
    this->x = x;
    this->y = y;
}

// Getters...
int point::getX() const { return x; };
int point::getY() const { return y; };

// Overload + operator...
point point::operator+(const point& other) const{
    int newX = this->x + other.x;
    int newY = this->y + other.y;
    return point(newX, newY);
}

//Overload == operation

bool point::operator==(const point& other) const{
    return (this->x == other.x && y == other.y);
}

//print funtion...
void point::print() const{
    cout<<"("<<x<<" , "<<y<<")";
}