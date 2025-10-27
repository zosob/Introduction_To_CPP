#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include<iostream>
using namespace std;

class temperature{
    private:
        double celsius;
    public:
        //Constructors...
        temperature();                          //Default constructor...
        temperature(double c);                  //Constructor for Celsius...
        temperature(double value, char scale); //Fahrenheit or other

        double getCelsius() const;
        double getFahrenheit() const;

        //Display method...
        void print() const;
    };
#endif