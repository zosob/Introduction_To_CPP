/*
Uses string for employee names.
Uses a 2D array for salary and tax.
Accepts up to 10 entries.
Calculates tax based on salary tiers.
Prints a summary with totals.
*/


#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    const int MAX_ENTRIES=10;

    double salaryTax[MAX_ENTRIES][2]; // [][0] = Salary ; [][1] = Tax
    string names[MAX_ENTRIES]; //Array to store employee names...

    double salary, taxRate, tax, totalSalaries = 0, totalTax = 0;
    int count = 0;

    cout<<"Please enter up to 10 employee names and annual salaries (enter 0 to stop):"<<endl;

    //Input loop

    while(count < MAX_ENTRIES){

        cout<<"\nEnter name for employee #"<<(count+1)<<":";
        getline(cin, names[count]);

        cout<<"Enter salary for "<<names[count]<<":";
        cin>>salary;
        cin.ignore(1000,'\n');

        //Check my break condition...
        if(salary==0){
            break; //This is my stopping condition, if user enters 0...
        }

        //Determine the tax rate based on salary
        if(salary<20000){
            taxRate=0.10;
        } else if(salary<=50000){
            taxRate=0.20;
        } else if(salary<=100000){
            taxRate=0.30;
        } else {
            taxRate=0.40;
        }

        tax=salary*taxRate;

        //Store salary and tax in vectors...
        salaryTax[count][0] = salary; //[row][column] [column][row]
        salaryTax[count][1] = tax;

        count++;
    }

    // Calculate totals

    //Output results...
    cout<<"Summary of Salaries and Taxes:"<<endl;

    for(int i=0; i < count; i++){
        cout<<"Employee:"<<names[i]<<"---->"<<" Salary: $"<<salaryTax[i][0]<< "----> Tax: $"<<salaryTax[i][1]<<endl;

        totalSalaries += salaryTax[i][0];
        totalTax += salaryTax[i][1];
    }

    cout<<"\nTotal Salaries: $"<<totalSalaries;
    cout<<"\nTotal Taxes: $"<<totalTax<<endl;


}