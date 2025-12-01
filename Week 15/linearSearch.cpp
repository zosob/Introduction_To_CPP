// Linear Search...

#include<iostream>
using namespace std;

int linearSearch(int numbers[], int numbersSize, int key){
    for(int i=0; i<numbersSize; i++){
        if(numbers[i] == key){
            return i;
        }
    }
    return -1;
}


int main(){
    int numbers[] = { 2, 4, 7, 21, 10, 1, 3, 19};
    const int NUMBERS_SIZE = 8;
    int i, key, keyIndex; 

    cout<<"Original Array:";
    for(i = 0; i < NUMBERS_SIZE; i++){
        cout<<numbers[i]<<" ";
    }

    cout<<"\n\nEnter a value you would like to search in the array: ";
    cin>>key;

    keyIndex=linearSearch(numbers,NUMBERS_SIZE,key);

    if(keyIndex == -1)
        cout<<key<<" was not found!"<<endl;
    else
        cout<<key<<" was found at "<<keyIndex<<"."<<endl;

}