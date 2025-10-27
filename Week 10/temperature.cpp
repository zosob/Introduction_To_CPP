#include "temperature.h"

// Default constructors...
temperature::temperature(){
    celsius = 0.0;
    cout<<"[DEBUG] Default constructor called."<<endl;
}

//Celsius constructor...
temperature::temperature(double c){
    celsius = c;
    cout<<"[DEBUG] Celsius constructor was called."<<endl;
}

//Fahrenheit constructor...
temperature::temperature(double value, char scale){
    if(scale == 'F' || scale == 'f'){
        celsius = (value - 32) * 5.0 / 9.0;
        cout<<"[DEBUG] Fahrenheit constructor called."<<endl;
    } else {
        celsius = value;
        cout<<"[DEBUG] Unknown scale, treated as celsius."<<endl;
    }
}

//Accessor methods...
double temperature::getCelsius() const{
    return celsius;
}

double temperature::getFahrenheit() const{
    return (celsius * 9.0 / 5.0) + 32;
}

//Display method...
void temperature::print() const{
    cout<<"Temperature: "<<celsius<<" degree C/ "<<getFahrenheit()<<"degree F"<<endl;
}