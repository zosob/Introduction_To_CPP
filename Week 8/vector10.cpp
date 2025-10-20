//Include my header file...
#include "vector10.h"

//Define the functions for the integer vectors...

bool isVectorMult10(vector<int> myVec){
    for (int val : myVec){
        if(!isMultipleOf10(val)){
            return false;
        }
    }
    return true;
}
bool isVectorNoMult10(vector<int> myVec){
    for (int val : myVec){
        if(isMultipleOf10(val)){
            return false;
        }
    }
    return true;
}

// === Overloaded functions ===

bool isVectorMult10(vector<double> myVec){
    for (double val : myVec) {
        if(!isMultipleOf10(static_cast<int>(val))){
            return false;
        }
    }
    return true;
}

bool isVectorNoMult10(vector<double> myVec){
    for (double val : myVec) {
        if(isMultipleOf10(static_cast<int>(val))){
            return false;
        }
    }
    return true;
}