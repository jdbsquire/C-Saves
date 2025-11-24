#include "Menu.h"

using namespace std;

    //constructors defined
    Menu::Menu(){
        type = "";
    }

    Menu::Menu(const int& typeProgram){
        setMenuType(typeProgram);
    }

    // Definition for the overloaded ostream operator
    // Here is what to display when the ostream references this
    ostream& operator << (ostream& os, Menu& menu){

        os
            << right << setw(30) << "MAIN MENU\n"
            << right << setw(41) << "Chapter 2 Programs and Classes\n"
            << right << setw(39) << "Enter code to use feature.\n"
            << right << setw(46) << "Esc to return to this screen at any time\n"
            << string(48, '*') << "\n"
            << left << setw(24) << "Arithmetic - 1  " 
            << right << setw(17) << "| Multiple Of - 2\n"
            << left << setw(24) << "Stream Insertion - 3  " 
            << right << setw(20) << "| Checker Board - 4\n"
            << left << setw(22) << "Compare Integers - 5" 
            << right << setw(20) << "| Char to Int - 6\n"
            << left << setw(24) << "Small to Largest - 7" 
            << right << setw(20) << "| Parse the Integer - 8\n"
            << left << setw(24) << "Circle - 9" 
            << right << setw(20) << "| Squares and Cubes - 10\n"
            << left << setw(15) << "Shapes - 11" 
            << right << setw(20)<< "| BMI - 12\n"
            << left << setw(15) << "Largest to Smallest - 13" 
            << right << setw(15) << "| Carpool - 14\n"
            << left << setw(21) << "Odd or Even - 15"
            << right << setw(5) <<"|\n"
            << string(48, '*') << "\n"<< endl;

        return os;

    }

    // getters
    string Menu::getMenuType(){
        return type;
    }

    // setters
    void Menu::setMenuType(const int& menuType){

            // switch case returns nothing but the program uses the information
            //switch only takes integers
            // "type" is the variable name receiving the value
            switch(menuType){
                case 1:
                    type = "Arithmetic";
                    break;
                case 2:
                    type = "Stream Insertion";
                    break;
                case 3:
                    type = "Compare Integers";
                    break;
                case 4:
                    type = "Small to Largest";
                    break; 
                case 5:
                    type = "Circle";
                    break;
                case 6:
                    type = "Shapes";
                    break;
                case 7:
                    type = "Largest to Smallest";
                    break;
                case 8:
                    type = "Odd or Even";
                    break;
                case 9:
                    type = "Multiple Of";
                    break;
                case 10:
                    type = "Checker Board";
                    break;
                case 11:
                    type = "Char to Int";
                    break;
                case 12:
                    type = "Parse the Integer";
                    break;
                case 13:
                    type = "Squares and Cubes";
                    break;
                case 14:
                    type = "BMI";
                    break;
                case 15:
                    type = "Carpool";
                    break;
            }
    }



