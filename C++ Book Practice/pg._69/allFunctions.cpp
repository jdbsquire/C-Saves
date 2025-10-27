#include <iostream>
#include <string>
#include <cmath>
#include <random>
#include <ctime>
#include <array>
#include <vector>
#include <cstddef>
#include <iomanip>
#include <exception>
#include <cstdlib>
#include <sstream>

using namespace std;

// DEFINITIONS FOR FUNCTIONS CALLED IN allMath
    void addNums(float num1, float num2){
        cout<< num1 << " + " << num2 << " is: " << num1 + num2 << endl;
    }

    void subtractNums(float num1, float num2){
        cout<< num1 << " - " << num2 << " is: " << num1 - num2 << endl;
    }

    void multiplyNums(float num1, float num2){
        cout<< num1 << " * " << num2 << " is: " << num1 * num2 << endl;
    }

    void divideNums(float num1, float num2){
        cout<< num1 << " / " << num2 << " is: " << num1 / num2 << endl;
    }
//

void allMath(float num1, float num2){
    addNums(num1, num2);
    subtractNums(num1, num2);
    multiplyNums(num1, num2);
    divideNums(num1, num2);
}

void print1234(){

    // create four integer variables
    int num1{1},
        num2{2},
        num3{3},
        num4{4};

    //inside the for loop
    for(int i{1}; i < 5; i++){
        cout << i << (i + 1) << "," << endl;
    }

    //Print with ostringstream
    //create instance of ostringstream class
    cout << "ostringstream operator \n";
    ostringstream stream1234;
    //assign information to stream1234
    stream1234 << num1 << num2 << ", " 
               << num3 << num4 << endl;
    
    //Must assign stream1234 function result to a variable
    // in this case string
    string result = stream1234.str();

    //cout the result
    cout << result << endl;

    cout << "\n";
}