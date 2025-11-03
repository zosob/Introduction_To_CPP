#include<iostream>
using namespace std;

int main(){
    cout<<" ===== Pointer Basics ===== "<<endl;

    int num = 10;
    int* p = &num;  // &num gets the address of num

    cout<<"Num =" << num << " , &num = " << &num <<" , p= " << p <<" , *p = "<< *p << endl;

    *p = 25;    //Dereferencing operator...
    cout<<"Number after change: "<<num<<endl;

// ======================================

cout<<"\n ===== Dynamic Memory Allocation ====="<<endl;

int* heapNum = new int(50);
cout<<"Dynamically allocated value ="<<*heapNum<<endl;
delete heapNum;

// ==============================================

cout<<"\n ===== Dynamic Arrays ===== "<<endl;
int n = 3;
int* arr = new int[n];

for(int i = 0; i < n; i++)
    arr[i] = i * 10;

cout<<"The dynamic array is : \n";
for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";

cout<<endl;


// ================================================

cout<<"\n ===== Resizing the Array ====== "<< endl;
int newSize = 5;
int* newArr = new int[newSize];
for(int i = 0; i < n; i++)
    newArr[i] = arr[i];
for(int i = n; i < newSize; i++)
    newArr[i] = 99;
delete[] arr;
arr = newArr;

cout<<"Resized Array: ";
for(int i = 0; i < newSize ; i++)
    cout<< arr[i]<<" ";
cout<<endl;

delete[] arr;


}

