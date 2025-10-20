#include<iostream>
using namespace std;

int main(){
    int number;

    //Prompt the user to enter a number...
    cout<<"Enter a number: ";
    cin>>number;

    //1. Basic if-else Statement...
    //Check if number is positive
    if (number > 0){                            //Condition True
        cout<<"The number is a positive number";// then do this...
    } else {                                    //Otherwise 
        cout<<"The number is a negative number"; //do this...
    }

    //Try changing the condition to check for negative numbers only

    // 2. Detecting Equal Values with Branches
    // Check if number is positive, zero, or negative
    
    if (number > 0){
        cout<<"The number is positive.\n";
    } else if (number == 0){
        cout<<"The number is zero.\n";
    } else {
        cout<<"The number is negative.\n";
    }

    //Add a branch to detect is the number is exactly 100
    //3. Detecting Ranges with Branches

    //Check if the number falls within a specific range...

    if (number >= 1 && number <= 10) // AND Operator... Both HAVE to happen
    {
        cout<<"The number is between 1 and 10.\n";
    } else if(number > 10 && number <= 20){
        cout<<"The number is between 11 and 20.\n";
    } else {
        cout<<"The number is outside the range of 1 to 20.\n";
    }

    //Add another range for numbers betwen 21 and 30

    //4. Detecting Ranges using Logical Operators
    //Use logical operators to check bounds...

    if (number < 0 ||  number > 100){// OR Operator
        cout<<"The number is out of bounds of 0-100.\n";
    } else if (number >=0 && number <= 100){
        cout<<"The number is within bounds.";
    }

    //5. Detect ranges with gaps
    // Exclude a specific range
    if (number != 2);
    if((number >=0 && number <= 100) && !(number >= 40 && number <=60))
    {
        cout<<"The number is within 0-100 but not between 40 and 60.";
    }

}