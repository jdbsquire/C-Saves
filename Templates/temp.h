/*
Summary: Header file for class Student, including
private attributes, constructors, and public methods.

Author: James Boyce
CU ID: 830383905
Due date: 09/12/2025
Status: Complete
*/

#ifndef NAME_H
#define NAME_H

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

class temp{

        private:
            string fName;
            string lName;
            int birthYear;
            int presentYear;

        public:
        //Constructors
        temp();
        temp(string, string);
        temp(string, string, int, int);

        //Setters
        void setFName(string),
             setLName(string),
             setBirthYear(int),
             setPresentYear(int);

        //Getters
        string getFName(),
               getLName();
        int getBirthYear(),
            getPresentYear();

        //Methods
        void displayTemp(),
             concatenateTemp();
};

#endif