#include <iostream>
#include "restaurant.h"
using namespace std;

void restaurant::setName(string restaurantName){
    name = restaurantName;
}

void restaurant::readAllReviews(){
    cout<<"Type ratings + comments. To end: -1"<<endl;
    reviews.inputReviews();
}

void restaurant::printCommentsByRating() const {
    int i;
    cout<<"Comments for each rating level: "<<endl;
    for(i = 1; i<=5 ; i++){
        cout<<i<<":"<<endl;
        reviews.printCommentsForRating(i);
    }
}