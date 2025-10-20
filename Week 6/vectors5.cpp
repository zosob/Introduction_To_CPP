/*
Vectors are useful to process tabular information. Income taxes are based on annual salary, usually with a tiered approach. Below is an example of a simple tax table:

Annual Salary	            Tax Rate
0 to 20000	                10%
Above 20000 to 50000	    20%
Above 50000 to 100000	    30%
Above 100000	            40%

The below program uses a vector salaryBase to hold the cutoffs for each salary level and a parallel vector taxBase that has the corresponding tax rate.

Run the program and enter annual salaries of 40000 and 60000, then enter 0.
Modify the program to use two parallel vectors named annualSalaries and taxesToPay, each with 10 elements. Vectors annualSalaries holds up to 10 annual salaries entered; vector taxesToPay holds up to 10 corresponding amounts of taxes to pay for those annual salaries. Print the total annual salaries and taxes to pay after all input has been processed.
Run the program again with the same annual salary numbers as above.
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Declare vectors to store up to 10 salaries and corresponding taxes...
    vector<double> annualSalaries, taxesToPay;

    double salary, taxRate, tax, totalSalaries = 0, totalTax = 0;
    int count = 0;

    cout<<"Please enter up to 10 annual salaries (enter 0 to stop):"<<endl;

    //Input loop

    while(count < 10){
        cout<<"Enter salary #"<<(count+1)<<":";
        cin>>salary;

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
        annualSalaries.push_back(salary);
        taxesToPay.push_back(tax);

        count++;
    }

    // Calculate totals

    for(int i =0; i< annualSalaries.size(); i++){
        totalSalaries += annualSalaries[i];
        totalTax += taxesToPay[i];
    }

    //Output results...
    cout<<"Summary of Salaries and Taxes:"<<endl;
    for(int i=0; i < annualSalaries.size(); i++){
        cout<<"Salary: $"<<annualSalaries[i] << " ----> Tax: $"<<taxesToPay[i]<<endl;
    }

    cout<<"\nTotal Salaries: $"<<totalSalaries;
    cout<<"\nTotal Taxes: $"<<totalTax<<endl;


}