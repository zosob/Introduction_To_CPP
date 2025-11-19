#include<iostream>
using namespace std;

void insertionSort(int numbers[], int numbersSize){
    int i, j, temp;

    for(i = 1; i < numbersSize; i++){
        j = i;
        while( j > 0 && numbers[j] < numbers[j-1]){
            //Swapping the numbers...
            temp = numbers[j];
            numbers[j] = numbers[j-1];
            numbers[j-1] = temp;
            j--;
        }
    }
}

int main(){
    int numbers[] = {10, 2, 78, 4, 45, 32, 7, 11 };
    const int NUMBERS_SIZE = 8;
    int i;

    cout<<"UNSORTED: ";
    for(i = 0; i < NUMBERS_SIZE; i++)
        cout<<numbers[i]<<" ";
    cout<<endl;

    insertionSort(numbers, NUMBERS_SIZE);

    cout<<"SORTED: ";
    for(i = 0; i < NUMBERS_SIZE; i++)
        cout<<numbers[i]<<" ";
    cout<<endl;
}