#include "Menu.h"
#include "Chpt_2.h"

Chpt_2 feature;

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
            << string(50, '*') << "\n"
            << left << setw(26) << "Arithmetic - 1" 
            << right << setw(17) << "| Multiple Of - 9\n"
            << left << setw(26) << "Stream Insertion - 2" 
            << right << setw(20) << "| Checker Board - 10\n"
            << left << setw(25) << "Compare Integers - 3" 
            << right << setw(20) << "| Char to Int - 11\n"
            << left << setw(24) << "Arth, Small to Largest - 4" 
            << right << setw(20) << "| Parse the Integer - 12\n"
            << left << setw(26) << "Circle - 5" 
            << right << setw(20) << "| Squares and Cubes - 13\n"
            << left << setw(17) << "Shapes - 6" 
            << right << setw(20)<< "| BMI - 14\n"
            << left << setw(26) << "Largest to Smallest - 7" 
            << right << setw(15) << "| Carpool - 15\n"
            << left << setw(23) << "Odd or Even - 8"
            << right << setw(5) <<"|\n"
            << string(50, '*') << "\n"<< endl;

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
            // feature is defined inside of Chpt_2.cpp file
            switch(menuType){
                case 1:
                    type = "Arithmetic";
                    feature.setType(type);
                    cout << "Arithmetic" << "\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";
                    break;
                case 2:
                    type = "Stream Insertion";
                    feature.setType(type);
                    cout << "Stream Insertion\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";
                    break;
                case 3:
                    type = "Compare Integers";
                    feature.setType(type);
                    cout << "Compare Integers\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";                    
                    break;
                case 4:
                    type = "Arth, Small to Largest";
                    feature.setType(type);
                    cout << "Arth, Small to Largestn\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";                    
                    break; 
                case 5:
                    type = "Circle";
                    feature.setType(type);
                    cout << "Circle\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";                    
                    break;
                case 6:
                    type = "Shapes";
                    feature.setType(type);
                    cout << "Shapes\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";                    
                    break;
                case 7:
                    type = "Largest to Smallest";
                    feature.setType(type);
                    cout << "Largest to Smalest\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";                    
                    break;
                case 8:
                    type = "Odd or Even";
                    feature.setType(type);
                    cout << "Odd or Even\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";                    
                    break;
                case 9:
                    type = "Multiple Of";
                    feature.setType(type);
                    cout << "Multiple Of\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";
                    break;
                case 10:
                    type = "Checker Board";
                    feature.setType(type);
                    cout << "Checker Board\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";
                    break;
                case 11:
                    type = "Char to Int";
                    feature.setType(type);
                    cout << "Char to Int\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";
                    break;
                case 12:
                    type = "Parse the Integer";
                    feature.setType(type);
                    cout << "Parse the Integer\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";
                    break;
                case 13:
                    type = "Squares and Cubes";
                    feature.setType(type);
                    cout << "Squares and Circles\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";
                    break;
                case 14:
                    type = "BMI";
                    feature.setType(type);
                    cout << "BMI\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";
                    break;
                case 15:
                    type = "Carpool";
                    feature.setType(type);
                    cout << "Carpool\n\n";
                    cin >> feature;
                    cout << "\n"
                         << feature
                         << "\n";
                    break;
            }
    }



