#ifndef RESTAURANT_H
#define RESTAURANT_H
#include<string>
#include "reviews.h"

class restaurant{
    public:
        void setName(std::string restaurantName);
        void readAllReviews();
        void printCommentsByRating() const;

    private:
        std::string name;
        reviews reviews;
};

#endif