#include "review.h"
using namespace std;

void review::setRatingAndComment(int revRating, string revComment){
    rating = revRating;
    comment = revComment;
}

int review::getRating() const {
    return rating;
}

string review::getComment() const{
    return comment;
}