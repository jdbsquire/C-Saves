#include "Menu.h"

using namespace std;

    ostream& operator << (ostream& os, Menu& menu){

        os
            << "Arithmetic" << "Multiple Of\n"
            << "Stream Insertion" << "Checker Board\n"
            << "Compare Integers" << "Char to Int\n"
            << "Arithmetic Small to Largest" << "Parse the Integer\n"
            << "Circle" << "Squares and Cubes\n"
            << "Shapes" << "BMI\n"
            << "Largest to Smallest" << "Carpool\n"
            << "Odd or Even"<< endl;

        return os;
    }




