#include<iostream>
#include<cstring>
#include<memory>
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

        //Deep copy constructor...
        student(const student& other){
            this->id = other.id;
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
        }

        // Overloading the operator...
        student& operator=(const student& other){
            if(this != &other){
                delete[] name;
                id = other.id;
                name = new char[strlen(other.name) + 1];
                strcpy(name, other.name);
            }
            return *this;
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
        
    
    roster(const roster& other){
        size = other.size;
        capacity = other.capacity;
        students = new student[capacity];
        for(int i = 0; i < size; i++)
            students[i] = other.students[i];
    }

    roster operator=(const roster& other){
        if(this != &other){
            delete[] students;
            size = other.size;
            capacity = other.capacity;
            students = new student[capacity];
            for(int i = 0; i < size; i++)
                students[i] = other.students[i];
        }
        return *this;
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

//Smart pointers...

    void smartPointerDemo(){
        cout<<"\n ===== Smart Pointer Demo ====="<<endl;

        unique_ptr<student> uptr = make_unique<student>("Smart Alice", 2001);
        uptr->display();

        shared_ptr<student> sp1 = make_shared<student>("Shared Bob", 2002);
        shared_ptr<student> sp2 = sp1;
        cout<<"Shared count: "<<sp1.use_count() <<endl;
        sp2->display();
}

int main(){
    cout<<"=== Dynamic Roster Manager ==="<<endl;

    roster cs201;
    cs201.addStudent("Faysal", 101);
    cs201.addStudent("Robert", 102);
    cs201.addStudent("Sima", 103);
    cs201.show();

    cout<<"\nCopying roster..."<<endl;
    roster copy = cs201;
    copy.show();

    cout<<"\nAdding new student to the original roster..."<<endl;
    cs201.addStudent("Diana", 104);
    cs201.show();

    cout<<"\nCopy roster remains unchanged: "<<endl;
    copy.show();

    smartPointerDemo();
}