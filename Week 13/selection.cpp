//Selection sort...
#include<iostream>
using namespace std;

void selectionSort(int numbers[], int numbersSize){
    int indexSmallest, temp, i, j;

    for(i = 0; i < numbersSize - 1; i++){
        indexSmallest = i;
        for(j = i + 1; j < numbersSize; j++){
            if(numbers[j] < numbers[indexSmallest]){
                indexSmallest = j;
            }
        }

        //Swap numbers[i] and numbers[indexSmallest]
        temp = numbers[i];
        numbers[i] = numbers[indexSmallest];
        numbers[indexSmallest] = temp;
    }
}

int main(){
    int numbers[] = { 10, 2, 78, 4, 45, 32, 7, 11};
    const int NUMBERS_SIZE = 8;

    cout<<"Unsorted List: ";
    for(int i = 0; i < NUMBERS_SIZE; i++){
        cout<<numbers[i]<<' ';
    }
    cout<<endl;

    selectionSort(numbers, NUMBERS_SIZE);

    cout<<"Sorted List with Selection Sort: ";
    for(int i = 0; i < NUMBERS_SIZE; i++){
        cout<<numbers[i]<<' ';
    }
    cout<<endl;
}