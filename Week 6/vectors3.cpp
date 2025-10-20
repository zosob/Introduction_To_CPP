/* I add elements and names in two different arrays, and print the last elemets, and then remove the last element*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> scores;
    vector<string> names;

    //Add elements to the vector...
    //Adding scores first...
    scores.push_back(85);//0
    scores.push_back(73);//1
    scores.push_back(50);//2
    scores.push_back(40);//3
    scores.push_back(20);//4
    scores.push_back(100);//5


    //Add names to the string array...
    names.push_back("Alice");
    names.push_back("Bob");
    names.push_back("Charlie");
    names.push_back("David");
    names.push_back("Elijah");
    names.push_back("Faisal");
    cout<<"Displaying the names and the scores..."<<endl;
    //Display of the arrays:
    for(int i=0;i<names.size();i++){
        cout<<"Name:"<<names.at(i)<<" and Score:"<<scores.at(i)<<endl;
    }
    cout<<endl;
    //Display the last element of my array...
    cout<<"Last score: "<<scores.back()<<endl;
    cout<<"Last name: "<<names.back()<<endl;

    //Remove last element
    scores.pop_back();
    names.pop_back();

    cout<<"Displaying the names and the scores after removing the last element(pop_back)..."<<endl;
    //Display of the arrays:
    for(int i=0;i<names.size();i++){
        cout<<"Name:"<<names.at(i)<<" and Score:"<<scores.at(i)<<endl;
    }

    for(int i=0;i<scores.size();i++){
        scores.at(i)+=5;
    }

    cout<<"Displaying the names and the scores after adding 5 to each score..."<<endl;
    //Display of the arrays:
    for(int i=0;i<names.size();i++){
        cout<<"Name:"<<names.at(i)<<" and Score:"<<scores.at(i)<<endl;
    }
}