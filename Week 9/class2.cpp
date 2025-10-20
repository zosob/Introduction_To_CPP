#include<iostream>
#include<string>
using namespace std;

class Restaurant{
    public:
        void SetName(string restaurantName);    // sets the name of the restaurant...
        void SetRating(int userRating);         // sets rating 
        void print();

    private:
        string name;
        int rating;
};

// Sets the restaurant name...
void Restaurant::SetName(string restaurantName){
    name = restaurantName;
}

// Set rating...
void Restaurant::SetRating(int userRating){
    rating = userRating;
}

// Print function...
void Restaurant::print(){
    cout<< name << " -- "<<rating<<endl; 
}

int main(){
    Restaurant favLunchPlace;
    Restaurant favDinnerPlace;

    favLunchPlace.SetName("Chipotle");
    favLunchPlace.SetRating(4);

    favDinnerPlace.SetName("Arroy");
    favDinnerPlace.SetRating(4);

    cout<<"Favorite Restaurants: "<<endl;
    favLunchPlace.print();
    favDinnerPlace.print();

}