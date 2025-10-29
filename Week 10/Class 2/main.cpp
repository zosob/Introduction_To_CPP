#include <iostream>
#include "point.h"
#include "point.cpp"
using namespace std;

int main() {

    point p1(3, 4);
    point p2(3, 4);

    // Use the overloaded + operator

    point p3 = p1 + p2;
    cout<<"After addition: ";
    p3.print();
    cout<<endl;

    //Compare...
    if(p1==p2)
        cout<<"Points are equal";
    else
        cout<<"POints are not equal";

    


}