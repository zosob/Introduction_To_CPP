#ifndef REVIEWS_H
#define REVIEWS_H

#include<vector>
#include "review.h"

class reviews{
    public:
        void inputReviews();
        void printCommentsForRating(int currRating) const;
        int getAverageRating() const;
    
    private:
        std::vector<review> reviewList;
};

#endif