#include<iostream>
#include "reviews.h"

using namespace std;

//Get rating comment pair, add each to a list. -1 for break...

void reviews::inputReviews(){
    review currReview;
    int currRating;
    string currComment;

    cin>>currRating;

    while(currRating >= 0){
        getline(cin, currComment);
        currReview.setRatingAndComment(currRating, currComment);
        reviewList.push_back(currReview);
        cin>>currRating;
    }
}

//Print all the comments...
void reviews::printCommentsForRating(int currRating) const{
    review currReview;
    int i;

    for(i=0; i<reviewList.size(); i++){
        reviewList.at(i);
        if(currRating == currReview.getRating()){
            cout<< currReview.getComment() <<endl;
        }
    }
}

int reviews::getAverageRating() const{
    int ratingsSum=0;

    for(int i = 0; i< reviewList.size(); i++){
        ratingsSum += reviewList.at(i).getRating();
    }

    return (ratingsSum / reviewList.size());
}