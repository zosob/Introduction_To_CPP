/* A program to calucalte the area of a circle...*/

#include<iostream>
#include<cmath> //Need to value of PI, and pow function!

using namespace std;

double circleAreaCalculator(double radius){
    //The shortcut...
    return M_PI * pow(radius, 2); //M_PI gives value of PI.
}

void getCircleAreaSize(double area){

    if(area >= 10000) cout<<"That's a large circle!";
    else if(area >= 5000) cout<<"That's a biggish circle";
    else if(area >= 1000) cout<<"That's a small circle";
    else if (area >= 500) cout<<"That's a very small circle!";
    else cout<<"Is that even a circle?";

}

int factorial(int number){
    int result = 1;
    for(int i=2; i<=number; i++){
        result*=i;
    }
    return result;
}

int main(){
    
    //Declare variables...
    double radius, area;

    //Prompting the user...
    cout<<"Welcome to my Circle Area Calculator!";
    cout<<"\nEnter the radius: ";
    cin>>radius;

    area=circleAreaCalculator(radius);

    //Output the final value here...
    cout<<"\n\nThe area of the circle is :"<<area<<endl;

    getCircleAreaSize(area);

    //Printing the factorial of the radius...
    cout<<"\n\nThe factorial of the radius entered is: "<<static_cast<int>(radius);
}
