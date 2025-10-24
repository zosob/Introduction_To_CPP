#ifndef REVIEW_H
#define REVIEW_H

#include<string>

class review{
    public:
        void setRatingAndComment(int revRating, std::string revComment);
        int getRating() const;
        std::string getComment() const;

    private:
        int rating=-1;
        std::string comment="NoComment";
    
};
#endif