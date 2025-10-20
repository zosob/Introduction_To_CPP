/* I want add two numbers using a function...*/

#include<iostream>
using namespace std;

// 1. Declare function addReturn...

int addReturn(int num1, int num2){ //Format is *return dataype name of function (arguments)*
    //Declaring variables for the function
    int result = num1 + num2; //Add the two numbers and store in result...
    return result;
}

int multReturn(int num1, int num2){ //Returned values from this function...
    return num1*num2; //Directly returns the value...
}

void greet(){ //Void function, not returning anything, and has no arguments...
    cout<<"Hello! Welcome to CSCI 201! Hope you're learning!"<<endl;
}

void addPrint(int num1, int num2){

    cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;

}

void multPrint(int num1, int num2){
    cout<<"The multiplied value of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
}



int main(){
    //Declare two integers...
    int num1 = 10, num2 = 15, sum;

    /* 1. Add function that returns a value...*/
    sum = addReturn(num1, num2); //Sends values, not variable names

    greet();
    cout<<"Using the return functions:"<<endl;

    //Print the result
    cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<sum<<endl;

    //Printing the reuslts of multiplying...
    cout<<"The multiplied value of "<<num1<<" and "<<num2<<" is "<<multReturn(num1,num2)<<endl; //short

    cout<<"Using the void function:"<<endl;

    addPrint(num1,num2);
    multPrint(num1,num2);



}
