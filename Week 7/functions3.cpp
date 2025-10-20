/* Calculate the square of a number, and test if the function is correct...  */

#include<iostream>
#include<cassert>
using namespace std;

//The function to calculate squares...
int square(int num){
    return num * num;
}

//Test function to test the square function...
void testSquare(){
    cout<<"Running tests..."<<endl;

    //Assert that the functions returns the expected values
    assert(square(2) == 4);     // 2 == 4
    assert(square(-3) == 9);    // -3 == 9
    assert(square(5) == 25);    // 5 == 25
    assert(square(0) == 0);     // 0 ==0 

    cout<<"All tests have passed!";
}

int main(){
    testSquare();
}