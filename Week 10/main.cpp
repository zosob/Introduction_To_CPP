#include "temperature.h"
#include "temperature.cpp"
#include<iomanip>

// Test helper function...

void runTest(const string& testName, double expectedC, double actualC, double tolerance=0.001){
    cout<<left<<setw(30)<<testName<<" : ";
    if(abs(expectedC - actualC) <= tolerance){
        cout<<"PASS";
    } else {
        cout<<"FAIL (Expected " <<expectedC<<"degreeC, got " <<actualC<<" degree C)";
    }
    cout<<endl;
}

int main(){
    cout<<fixed<<setprecision(2);
    cout<<" ===== Temperature Class Test Bench ====="<<endl<<endl;

    //Test 1: Default constructor...
    temperature t1;
    runTest("Default constructor(0dC)", 0.0, t1.getCelsius());

    //Test 2: Celsius constructor...
    temperature t2(25.0);
    runTest("Celsius constructor(25dC)", 25.0, t2.getCelsius());

    //Test 3: Fahrenheit constructor...
    temperature t3(98.6, 'F');
    runTest("Fahrenheit constructor(98.6dF)", 37.0, t3.getCelsius(), 0.5);

    //Test 4: Invalid scale defaults to Celsius...
    temperature t4(100.0, 'X');
    runTest("Invalid scale defaults to Celsius", 100.0, t4.getCelsius());


    //Test 5: Fahrenheit output...
    runTest("Fahrenheit output (25dc -> F)", 25.0 * 9.0 / 5.0 + 32.0, t2.getFahrenheit());

    //Test 6 : Below freezing...
    temperature t5(-45.0);
    runTest("Below freezing (-40dC) ", -40.0, t5.getCelsius());
    runTest("Below freezing check ( -40C = -40F) ", -40.0, t5.getFahrenheit());

    //Test 7: Boiling point...
    temperature t6(212.0, 'F');
    runTest("Boiling point of water (212F)", 100.0, t6.getCelsius());

    // ---Test 8: Multiple objects don't interfere...
    temperature t7(10.0);
    temperature t8(20.0);
    bool independent = (t7.getCelsius() == 10.0 && t8.getCelsius() == 20.0);

    cout<<left<<setw(30)<<"Independent object states"<<" : "<<(independent ? "PASS" : "FAIL")<<endl;

    cout<<"\n ===== End of Unit Tests =====";

}