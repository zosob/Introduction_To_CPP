#include<iostream>
#include<string>
#include<iomanip>
#include "foodItem.h"
#include "foodItem.cpp"

using namespace std;

int main(){
    //Declare variables...
    string name;

    //Prompt user for food item...
    cout<<"Please enter food item: ";
    getline(cin, name);

    if(name=="Water"){
        foodItem item;
        item.printInfo();
        cout<<"Number of calories for 1.00 serving(s): "<<fixed<<setprecision(2)<<item.getCalories(1.0)<<endl;
    } else {
        double fat, carbs, protein, servings;
        cout<<"\nEnter fat in grams: ";
        cin>>fat;
        cout<<"\nEnter carbs in grams: ";
        cin>>carbs;
        cout<<"\nEnter protein in grams: ";
        cin>>protein;
        cout<<"\nEnter servings: ";
        cin>>servings;

        foodItem item(name, fat, carbs, protein);
        item.printInfo();
        cout<<"Number of calories for 1.00 serving(s): "<<fixed<<setprecision(2)<<item.getCalories(1.0)<<endl;
        cout<<"Number of calories for "<<servings<<" serving(s): "<<fixed<<setprecision(2)<<item.getCalories(servings)<<endl;

    }
}