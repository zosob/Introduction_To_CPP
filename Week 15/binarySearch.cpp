#include<iostream>
using namespace std;

int binarySearch(int numbers[], int numbersSize, int key){
    int low, mid, high;
    low = 0;
    high = numbersSize - 1;

    while(high >= low){
        mid = (high + low) /2;
        if(numbers[mid] < key){
            low = mid + 1;
        } else if (numbers[mid] > key){
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}


int main(){
    int numbers[] = { 2, 4, 7, 10, 11, 32, 45, 87};
    const int NUMBERS_SIZE = 8;
    int i, key, keyIndex; 

    cout<<"Original Array:";
    for(i = 0; i < NUMBERS_SIZE; i++){
        cout<<numbers[i]<<" ";
    }

    cout<<"\n\nEnter a value you would like to search in the array: ";
    cin>>key;

    keyIndex=binarySearch(numbers,NUMBERS_SIZE,key);

    if(keyIndex == -1)
        cout<<key<<" was not found!"<<endl;
    else
        cout<<key<<" was found at "<<keyIndex<<"."<<endl;

}