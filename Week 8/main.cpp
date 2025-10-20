#include<iostream>
#include<vector>
#include "vector10.h"
#include "vector10.cpp"

using namespace std;

int main(){
    
    int size;

    cout<<"Enter the size of the vector: ";
    cin>>size;
    cout<<endl;

    vector<int> myVec(size);

    for(int i=0; i<size; i++){
        cout<<"Enter value "<<i+1<<" : ";
        cin>>myVec[i];
    }

    if(isVectorMult10(myVec)){
        cout<<"All values are multiples of 10.";
    } else if(isVectorNoMult10(myVec)){
        cout<<"No multiples of 10 in this vector!";
    }
}