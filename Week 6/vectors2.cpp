/* Vector of names = ["Alice", "Bob", "Charlie"]
Vector of scores = [90, 100, 120]*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> names = {"Alice" , "Bob", "Charlie"}; // An array of strings...
    vector<int> scores = {90, 100, 120}; // An array of integers...

    cout<<"Names with their scores: "<<endl;
    //Iterate through both vectors...
    for(int i = 0; i < names.size(); i++){
        cout<< names.at(i) << " ------ " << scores.at(i) <<endl;
    }
}