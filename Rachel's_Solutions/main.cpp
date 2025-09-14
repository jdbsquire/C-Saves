#include "Student.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <sstream> //used by the int getGrade(int) function

int main() {
    Student myStudent1;
    myStudent1.addClass("CSCI1510", 80);
    myStudent1.addClass("ENVS1044", 97);
    myStudent1.addClass("MATH1109", 100);
    myStudent1.listGrades();
    //tests the add class and list grades member functions

    myStudent1.addClass("", 87); 
    myStudent1.addClass("PSYCH1000", -2);
    myStudent1.addClass("MATH2100", 102);
    //tests add class function with invalid input

    Student myStudent2;
    myStudent2.setStudent(111512610, "Rachel", "Lyman", "2201 N Ursula St", 2128543721, "97 100 80 100", "ENVS1044 MATH1109 CSCI1510 CSCI2312");
    myStudent2.displayStudent();
    //tests get student and display student member functions

    std::cout << "Grade @ index 0: " << myStudent2.getGrade(0) << "\n";
    std::cout << "Grade @ index 7: " << myStudent2.getGrade(7) << "\n";
    //tests getGrade function

    std::cout << "Class @ index 0: " << myStudent2.getClass(0) << "\n";
    std::cout << "Class @ index 7: " << myStudent2.getClass(7) << "\n";
    //tests getClass function

    myStudent2.setCount();
    std::cout << "Count after setCount(): " << myStudent2.getCount() << "\n";
    //tests set count function

    std::cout << "Letter grade associated with 78: " << myStudent2.convertLetterGrade(78) << "\n";

    myStudent2.setFName("Emma");
    std::cout << "Updated first name: " << myStudent2.getFName() << "\n";
    myStudent2.setLName("Watson");
    std::cout << "Updated last name: " << myStudent2.getLName() << "\n";
    myStudent2.setSID(901555378);
    std::cout << "Updated student ID: " << myStudent2.getSID() << "\n";
    myStudent2.setAddress("1237 Maple Avenue");
    std::cout << "Updated address: " << myStudent2.getAddress() << "\n";
    myStudent2.setPhone(1002091234);
    std::cout << "Updated phone number: " << myStudent2.getPhone() << "\n";
    //setter tests
}