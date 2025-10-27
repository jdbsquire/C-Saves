#ifndef CHPT_2_H
#define CHPT_2_H

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

class Chpt_2{

    //friend prototypes
    friend ostream& operator << (ostream& os, Chpt_2& chapter);
    friend istream& operator >> (istream& is, Chpt_2& chapter);

    private:
        int num1{0}
            num{0};

    public:
        //Constructors
        Chpt_2();//default constructor
        Chpt_2();//parameterized

        //Getters
        //Setters
        //Methods


};

#endif