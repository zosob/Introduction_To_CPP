#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> numbers; //Declare a vector of integers...

    //Fill this vector with 5 numbers...
    for(int i = 0; i< 5; i++){
        numbers.push_back(i);
    }

    /* When i = 0;
        numbers[0] = 0

    numbers= [0]

    When i = 1;
        numbers[1] = 1

    numbers = [0, 1]

    When i = 2;
        numbers[2] = 2

    numbers = [0, 1, 2]
    .
    .
    .   
    Finally numbers = [0, 1, 2, 3, 4]    */

    //Print the numbers in the vector...
    cout<<"The numbers in the vector are: "<<endl;
    for(int i=0; i<numbers.size(); i++){
        cout<<numbers.at(i)<<endl;
    }

    //Let's try to reverse the vector order...
    for (int i = numbers.size() - 1; i>=0; i--){
        cout<<numbers.at(i)<<endl;
    }
}