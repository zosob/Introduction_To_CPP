#include<iostream>  // For cin and cout
#include<string>
#include<iomanip>
#include<sstream>
#include<fstream>

using namespace std;

int main(){
    // =========================
    // 1. Basic Input Output Streams
    // =========================

    string name;
    int age;

    cout<<"Enter your name: ";
    cin>>name; // 'cin' reads from the keyboard

    //cout will write to the console...
    cout<<"Hello, "<<name;

    // =========================
    // 2. Output Formatting
    // =========================

    double pi = 3.1415926535;
    double num = 123.456789;

    //Default..
    cout<<"Default: "<<pi<<endl;

    // 'fixed' shows decimal format
    // 'setprecision' controls the number of digits after the decimal
    cout<<fixed<<setprecision(2);
    cout<<"Fixed, 2 decimal places: "<<pi<<endl;

    //Print a table...
    cout<<"\nTable Example"<<endl;
    cout<<setw(10)<<"Item"<<setw(10)<<"Price"<<endl;
    cout<<setw(10)<<"Apple"<<setw(10)<<0.99<<endl;
    cout<<setw(10)<<"Orange"<<setw(10)<<1.99<<endl;

    // =========================
    // 3. String Streams
    // =========================

    string input = "42 3.14 hello";
    cout<<"Original String: \""<<input<< "\"\n";

    //'istringstream' treates a string like an input stream
    istringstream iss(input);
    int intVal;
    double doubleVal;
    string word;

    iss>>intVal>>doubleVal>>word;

    cout<<"Extracted integer: "<<intVal<<endl;
    cout<<"Extracted double: "<<doubleVal<<endl;
    cout<<"Extracted word: "<<word<<endl;

    ostringstream oss;

    oss<<"Formatted number: "<<fixed<< setprecision(2)<<num<<"\n";
    oss<<"Name: "<<name;

    string output = oss.str();

    cout<<"\nString build with ostringstream: \n"<<output<<endl;

}

