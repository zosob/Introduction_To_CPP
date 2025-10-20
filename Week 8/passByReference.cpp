/*We’ll break it into two parts:

A function called ReadSentences to read the words into two vectors.
A main() function that compares the vectors and prints differing word pairs.*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

//Function to read two sentences into vectors...
void readSentences(vector<string>& sentence1, vector<string>& sentence2, int wordCount){

    string word;

    cout<<"\nPlease enter the first sentence: ";
    //Reading the first sentence...
    for(int i = 0; i< wordCount; i++){
        cin >> word;
        sentence1.push_back(word);
    }

    cout<<"\nPlease enter the second sentence: ";
    //Reading the second sentence...
    for(int i = 0; i< wordCount; i++){
        cin >> word;
        sentence2.push_back(word);
    }
}

int main(){
    int wordCount;
    vector<string> sentence1, sentence2;
    do{
        //Prompt the user for the number of words in each sentence...
        cout<<"Enter the number of words in each sentence(Max: 10 words): ";
        cin>>wordCount;

        if(wordCount>10)
            cout<<"Word count greater than 10! Try again."<<endl;
            
    }while(wordCount>10);
    

    //Call function to reach both sentences...
    readSentences(sentence1, sentence2, wordCount);

    //Compare words and print the differing pairs...
    for(int i = 0; i < wordCount; i++){
        if(sentence1[i] != sentence2[i]){
            cout<<"Word number: "<<i+1<<" doesn't match. The words are: "<< sentence1[i]<<" and "<<sentence2[i]<<endl;
        }
    }
}



