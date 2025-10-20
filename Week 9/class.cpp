// Assign values to Student object, and then display the information...

#include<iostream>
#include<string>
using namespace std;

// Define a class named Student...
class Student{
    public:
        // Data members or attributes...
        string name;
        int age, studentID;
    
    // Member functions to display student information...
    void displayInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Student ID: "<<studentID<<endl;
    }
};

int main(){

    // Create an object...
    Student student1;

    // Assign values to the object's attributes...
    student1.name = "Jared";
    student1.age = 20;
    student1.studentID = 12345;

    // Display the student information...
    student1.displayInfo();

}