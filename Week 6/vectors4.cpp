/* Swap two varaibles...*/

#include<iostream>
#include<algorithm> 
using namespace std;

int main(){
    int a=20;
    int b=35;
    int temp;

    cout<<"Before swapping a = "<<a<<" and b = "<<b<<endl;

    //Using a temp variable...
    temp = a;
    a = b;
    b = temp;

    cout<<"After temp variable swap: a = "<<a<<" and b = "<<b<<endl;

    //Using function way...
    swap(a,b);

    cout<<"After swap function: a = "<<a<<" and b = "<<b<<endl;
}