#include "Chpt_2.h"

#include <algorithm>
#include <array>
#include <cctype>
#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iomanip>
#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

int main(){

    //create instance of class
    Chpt_2 baseMath;

    int num1{0},
        num2{0};

    cout << "Hello\n";
    //get all four vals from getters
    cout << "cout block start\n";
    cout << "SUM: " << baseMath.getSum() << "\n" <<
         "MULTIPLY: " << baseMath.getProduct() << "\n" <<
         "SUBTRACT: " << baseMath.getDifference() << "\n" <<
         "DIVIDE: " << baseMath.getQuotient() << "\n";
    cout << "cout block end\n";

    return 0;
}