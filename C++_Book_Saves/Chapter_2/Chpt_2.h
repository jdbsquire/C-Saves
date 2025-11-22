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
        float num1{0},
            num2{0},
            result{0},
            newSum{0},
            newProduct{0},
            newDifference{0},
            newQuotient{0};

    public:
        //Constructors
        Chpt_2();//default constructor
        Chpt_2(const float&, const float&);//parameterized

        //Getters
        float getSum() const;
        float getProduct()const;
        float getDifference()const;
        float getQuotient()const;

        //Setters
        void setSum(const float&, const float&);
        void setProduct(const float&, const float&);
        void setDifference(const float&, const float&);
        void setQuotient(const float&, const float&);

        //Methods
        void captureValues(const float&, const float&);
};

#endif