#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

char getLetterGrade(double avg){
    if (avg>=90) return 'A';
    else if (avg>=80) return 'B';
    else if (avg>=70) return 'C';
    else if (avg>=60) return 'D';
    else return 'F';
}

int main(){
    const string inputFileName = "C:\\Users\\ck8758cn.e\\OneDrive - Minnesota State\\Documents\\Semesters\\Fall 2025\\CSCI 201\\Introduction_To_C++\\Week 12\\StudentInfo.tsv";

    ifstream inFile;
    inFile.open(inputFileName);

    if(inFile.fail()){
        cerr<<"Error: Could not open file "<<inputFileName<< endl;
        return 1;
    }
    
    string lastName, firstName;
    int mid1, mid2, finalExams;

    const int MAX_STUDENTS = 20;

    //String array to store names...
    string lastNames[MAX_STUDENTS];
    string firstNames[MAX_STUDENTS];

    //Integer arrays to store scores...
    int midterm1[MAX_STUDENTS];
    int midterm2[MAX_STUDENTS];
    int finals[MAX_STUDENTS];

    //Char array to store letter grade...
    char letterGrades[MAX_STUDENTS];

    int count = 0;
    
    while(!inFile.eof() && count < MAX_STUDENTS){
        inFile >> lastName >> firstName >> mid1 >> mid2 >> finalExams;

        lastNames[count] = lastName;
        firstNames[count] = firstName;
        midterm1[count] = mid1;
        midterm2[count] = mid2;
        finals[count] = finalExams;

        double avg = (mid1 + mid2 + finalExams) / 3.0;
        letterGrades[count] = getLetterGrade(avg);

        count++;
    }

    inFile.close();

    if(count == 0){
        cerr<<"Error: No student data found.\n";
        return 1;
    }

    //Compute Averages...

    double sumMid1 = 0, sumMid2 = 0, sumFinal = 0;
    for(int i = 0; i < count; i++){
        sumMid1 += midterm1[i];
        sumMid2 += midterm2[i];
        sumFinal += finals[i];
    }

    double avgMid1 = sumMid1 / count;
    double avgMid2 = sumMid2 / count;
    double avgFinal = sumFinal / count;
}