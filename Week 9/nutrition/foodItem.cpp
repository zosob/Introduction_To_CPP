#include<iostream>
#include<iomanip>
#include "foodItem.h"

using namespace std;

foodItem::foodItem(){ //Default constructor
    name="Water";
    fat=0.0;
    carbs=0.0;
    protein=0.0;
}

foodItem::foodItem(string nameVal, double fatVal, double carbVal, double proteinVal){
    name = nameVal;
    fat = fatVal;
    carbs = carbVal;
    protein = proteinVal;

}

void foodItem::printInfo(){
    cout<<fixed<<setprecision(2);
    cout<<"Nutritional information per serving of "<<name<< ":\n";
    cout<<"   Fat: "<<fat<<"g\n";
    cout<<"   Carbohydrates: "<<carbs<<"g\n";
    cout<<"   Protein: "<<protein<<"g\n";
}

double foodItem::getCalories(double numServings){
    return numServings * ((fat*9) + (carbs*4) + (protein*4));
}