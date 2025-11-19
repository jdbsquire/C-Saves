#include "Chpt_2.h"

#include <algorithm>
#include <array>
#include <cctype>
#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

int main(){

    //create instance of class
    Chpt_2 baseMath;

    string num1{""},
        num2{""};

    cout << "Hello\n";

    cout << "Enter the first number: ";
    getline(cin, num1);

    cout << "Enter the second number: ";
    getline(cin, num2);

    cout << "\n";
    //convert the strings to floats
    //send to captureValues method
    baseMath.captureValues(stof(num1), stof(num2));

    //populate the constructor
    //baseMath(num1, num2);

    //get all four vals from getters
    cout << "cout block start\n";
    cout << "SUM: " << baseMath.getSum() << "\n" <<
         "MULTIPLY: " << baseMath.getProduct() << "\n" <<
         "SUBTRACT: " << baseMath.getDifference() << "\n" <<
         "DIVIDE: " << baseMath.getQuotient() << "\n";
    cout << "cout block end\n";

    return 0;
}