/*
* @file Student.h
* @author: Rachel Lyman @RachelUmbrella 
* @student ID: 111512610
* @tested: via windows powershell terminal
* @date completed: 2025-09-12
* @program status: runs as expected
* @notes: None
*/

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private: 
    int sId; //holds student ID
    std::string fName; //holds first name
    std::string lName; //holds last name
    std::string address; //holds address
    long phoneNumber; //holds student phone #
    std::string grades; //holds a list of grades sep by spaces
    std::string classes; //holds student classes sep by spaces
    int count; //num of elements in grade & classes string

public:
    Student(); //default constructor
    Student(int sId, std::string fName, std::string lName,
    std::string address, long phoneNumber, std::string grades,
    std::string classes, int count); //full parameterized constructor


//getters
int getSID();
std::string getFName();
std::string getLName();
std::string getAddress();
long getPhone();
int getCount();


//setters
void setSID(int sId);
void setFName(std::string fName);
void setLName(std::string lName);
void setAddress(std::string address);
void setPhone(long phoneNumber);
void setCount();

//other functions:
int getGrade(int);
void setStudent(int sId, std::string fName, std::string lName, std::string address,
long phoneNumber, std::string grades, std::string classes);
void displayStudent();
std::string getClass(int);
void addClass(std::string, int);
std::string convertLetterGrade(int);
void listGrades();
};

#endif