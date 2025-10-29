#include <iostream>
#include "restaurant.h"
#include "restaurant.cpp"
#include "review.h"
#include "review.cpp"
#include "reviews.h"
#include "reviews.cpp"

using namespace std;

int main(){
    restaurant ourPlace;
    string currName;

    cout<<"Please enter the name: ";
    getline(cin, currName);
    ourPlace.setName(currName);
    cout<<endl;

    ourPlace.readAllReviews();
    cout<<endl;

    ourPlace.printCommentsByRating();
}