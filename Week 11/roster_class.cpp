#include<iostream>
#include<cstring>
using namespace std;

class student{
    private:
        char* name;
        int id;
    public:
        student(const char* n = "Unnamed", int idNum = 0) : id(idNum) {
            name = new char[strlen(n)+1];
            strcpy(name, n);
        }

        void display() const{
            cout<<"ID: " << id << ", Name: " << name << endl;
        }

        ~student(){
            delete[] name;
        }
};

class roster{
    private:
        student* students;
        int size, capacity; // Has two...
    
    public:
        roster(int cap = 2) : size(0), capacity(cap) {
            students = new student[capacity];
        }
    
    void addStudent(const char* name, int id){
        if(size == capacity)
            resize();
        students[size++]= student(name, id);
    }

    void show() const{
        cout<<"\n-- Current Roster --"<<endl;
        for(int i = 0; i < size; i++)
            students[i].display();
    }

    void resize(){
        cout<<"Resizing from "<< capacity << " to "<< capacity * 2 << endl;
        capacity *= 2;
        student* newArr = new student[capacity];
        for( int i = 0; i < size; i++)
            newArr[i] = students[i];
        delete[] students;
        students = newArr;
    }

    ~roster(){
        delete[] students;
    }
};

int main(){
    cout<<"=== Dynamic Roster Manager ==="<<endl;

    roster cs201;
    cs201.addStudent("Faysal", 101);
    cs201.addStudent("Robert", 102);
    cs201.addStudent("Sima", 103);
    cs201.show();
}