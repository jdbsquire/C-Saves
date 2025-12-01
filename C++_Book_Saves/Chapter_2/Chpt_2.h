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
    friend ostream& operator << (ostream&, Chpt_2&);
    friend istream& operator >> (istream&, Chpt_2&);

    private:
        float num1{0},
            num2{0},
            num3{0},
            num4{0},
            result{0},
            newSum{0},
            newProduct{0},
            newDifference{0},
            newQuotient{0};
        string newType = "";

    public:
        //Constructors
        Chpt_2();//default constructor
        Chpt_2(const float&, const float&);//parameterized

        //Getters
        float getSum() const;
        float getProduct()const;
        float getDifference()const;
        float getQuotient()const;
        string getType()const;

        //Setters
        void setSum(const float&, const float&);
        void setProduct(const float&, const float&);
        void setDifference(const float&, const float&);
        void setQuotient(const float&, const float&);
        void setType(string&);

        //Methods
        void captureValues(const float&, const float&);
        void concatenate(const int&, const int&, const int&, const int&);
};

#endif