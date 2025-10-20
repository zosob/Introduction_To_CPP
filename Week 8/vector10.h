//Vector 10 Header File...

#ifndef VECTOR10_H
#define VECTOR10_H

#include<vector>
using namespace std;

// === Declaring functions ===

bool isVectorMult10(vector<int> myVec);
bool isVectorNoMult10(vector<int> myVec);


// == Function overloading ===

bool isVectorMult10(vector<double> myVec);
bool isVectorNoMult10(vector<double> myVec);

// === Inline helper function ===

// defining function to check if a number is a mulitple of 10.

inline bool isMultipleOf10(int num){
    return num % 10 == 0;
}

#endif