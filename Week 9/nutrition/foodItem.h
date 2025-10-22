#ifndef FOODITEM_H
#define FOODITEM_H

#include<string>
using namespace std;

class foodItem{
    public:
        foodItem();                 //Default constructor
        foodItem(string name, double fat, double carbs, double protein);  //Parameterized constructor

        void printInfo();
        double getCalories(double numServings);

    private:
        string name;
        double fat, carbs, protein;
};
#endif