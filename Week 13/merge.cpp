#include<iostream>
using namespace std;

void merge(int numbers[], int i, int j, int k){
    int mergedSize, mergePos, leftPos, rightPos, *mergedNumbers = nullptr;

    mergePos = 0;
    mergedSize = k - i + 1;
    leftPos = i;
    rightPos = j + 1;
    mergedNumbers = new int[mergedSize];

    while(leftPos <= j && rightPos <= k){
        if(numbers[leftPos] <= numbers[rightPos]){
            mergedNumbers[mergePos] = numbers[leftPos];
            leftPos++;
        } else {
            mergedNumbers[mergePos] = numbers[rightPos];
            rightPos++;
        }
        mergePos++;
    }

    while(leftPos <= j){
        mergedNumbers[mergePos] = numbers[leftPos];
        leftPos++;
        mergePos++;
    }

    while(rightPos <= k){
        mergedNumbers[mergePos] = numbers[rightPos];
        rightPos++;
        mergePos++;
    }

    //Copy the merged array back to the numbers array...
    for(mergePos = 0; mergePos < mergedSize; mergePos++){
        numbers[i+mergePos] = mergedNumbers[mergePos];
    }

    delete[] mergedNumbers;
}

void mergeSort(int numbers[], int i, int k){
    int j;

    if (i < k) {
        j = (i + k) / 2;

        mergeSort(numbers, i, j); //Left side
        mergeSort(numbers, j+1, k); //Right side

        merge(numbers, i, j, k);
    }
}

int main(){
    int numbers[] = {10, 2, 78, 4, 45, 32, 7, 11};
    const int NUMBERS_SIZE = 8;
    int i;

    cout<<"UNSORTED:";
    for(int i = 0; i < NUMBERS_SIZE; i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;

    mergeSort(numbers, 0, NUMBERS_SIZE - 1);

    cout<<"SORTED:";
    for(int i = 0; i < NUMBERS_SIZE; i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
}