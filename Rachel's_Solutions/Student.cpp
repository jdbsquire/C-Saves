#include "Student.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <sstream> //used by the int getGrade(int) function

Student::Student() {
    sId = 0;
    fName = "";
    lName = "";
    address = "";
    phoneNumber = 0;
    grades = "";
    classes = "";
    count = 0;
}
//defined default constructor 

Student::Student(int sId, std::string fName, std::string lName,
    std::string address, long phoneNumber, std::string grades,
    std::string classes, int count) {
    this->sId = sId;
    this->fName = fName;
    this->lName = lName;
    this->address = address;
    this->phoneNumber = phoneNumber;
    this->grades = grades;
    this->classes = classes;
    this->count = count;
}
//defined full parameterized constructor

//getters:
int Student::getSID(){
    return sId;
}
std::string Student::getFName(){
    return fName;
}
std::string Student::getLName(){
    return lName;
}
std::string Student::getAddress(){
    return address;
}
long Student::getPhone(){
    return phoneNumber;
}
int Student::getCount(){
    return count;
}

//setters:
void Student::setSID(int sId){
    this->sId = sId;
}
void Student::setFName(std::string fName){
    this->fName = fName;
}
void Student::setLName(std::string lName){
    this->lName = lName;
}
void Student::setAddress(std::string address){
    this->address = address;
}
void Student::setPhone(long phoneNumber){
    this->phoneNumber = phoneNumber;
}
void Student::setCount(){
//set counter to # of grades (& classes) in the string

    std::istringstream iss(grades);
    std::string value;

    int counter = 0;
    while (iss >> value)
    {
        counter++;
    }
    count = counter;
}

int Student::getGrade(int location)
{ //return the string value of the grade at the given location
      std::istringstream iss(grades);
      std::string value;
      int counter(0);
      while (iss >> value)
      {
          if (counter++ == location)
          {
            return stoi(value);
          }
      }
      return -1;
}

void Student::setStudent(int sId, std::string fName, std::string lName, std::string address,
long phoneNumber, std::string grades, std::string classes){
    this->sId = sId;
    this->fName = fName;
    this->lName = lName;
    this->address = address;
    this->phoneNumber = phoneNumber;
    this->grades = grades;
    this->classes = classes;

    std::istringstream gradeStream(grades);
    std::string token;
    int gradeCount = 0; //initialize counter for grades

    while (gradeStream >> token) {
        gradeCount++;
    } //goes through grades string, counts # of numeric values

    std::istringstream classStream(classes);
    int classCount = 0; //initialize counter for classes

    while(classStream >> token) {
        classCount++;
    }//goes through classes string, counts # of classes

    count = std::min(gradeCount, classCount); 
    //stores the # of grade/class pairs in count variable
}

void Student::displayStudent(){
    std::cout << std::string(35, '-') << "\n";
    std::cout << std::left << std::setw(15) << "Student ID" << "|"
    << std::right << std::setw(19) << sId << "\n";
    std::cout << std::left << std::setw(15) << "First Name" << "|"
    << std::right << std::setw(19) << fName << "\n";
    std::cout << std::left << std::setw(15) << "Last Name" << "|"
    << std::right << std::setw(19) << lName << "\n";
    std::cout << std::left << std::setw(15) << "Address" << "|"
    << std::right << std::setw(19) << address << "\n";
    std::cout << std::left << std::setw(15) << "Phone Number" << "|"
    << std::right << std::setw(19) << phoneNumber << "\n";
    std::cout << std::string(35, '-') << "\n";
}

std::string Student::getClass(int index){
    std::istringstream iss(classes);
    std::string className;
    int counter = 0;

    while (iss >> className) {
        if (counter++ == index) {
            return className;
        }
    }
    return ""; //returns empty string if index invalid
}
//parses class string, returns class name @ specified index

void Student::addClass(std::string className, int grade) {
    if (className.empty() || grade < 0 || grade > 100){
        return;
    }
    //^checks for empty string + ensures grade within the expected range

    if (!classes.empty()) classes += " "; //ensures no leading spaces
    classes += className;


    if(!grades.empty()) grades += " "; 
    grades += std::to_string(grade);

    count++; //increment count 

}

std::string Student::convertLetterGrade(int score){
    int gradeCode;

    //assigns a code (#) based on the score in the given range
    if(score >= 94) gradeCode = 1;
    else if (score >= 90) gradeCode = 2;
    else if (score >= 87) gradeCode = 3;
    else if (score >= 84) gradeCode = 4;
    else if (score >= 80) gradeCode = 5;
    else if (score >= 77) gradeCode = 6;
    else if (score >= 74) gradeCode = 7;
    else if (score >= 70) gradeCode = 8;
    else if (score >= 67) gradeCode = 9;
    else if (score >= 64) gradeCode = 10;
    else if (score >= 60) gradeCode = 11;
    else gradeCode = 12;
    
    //returns letter grade based on the gradeCode assigned above
    switch(gradeCode){
        case 1: return "A";
        case 2: return "A-";
        case 3: return "B+";
        case 4: return "B";
        case 5: return "B-";
        case 6: return "C+";
        case 7: return "C";
        case 8: return "C-";
        case 9: return "D+";
        case 10: return "D";
        case 11: return "D-";
        case 12: return "F";
        default: return "INVALID"; //handles unexpected gradeCode values
    }

}

void Student::listGrades() {
    std::cout << std::string(15,'-') << "\n";
    std::cout << std::left << std::setw(11) << "Class" 
    << std::right << std::setw(4) << "GRD" << "\n";
    std::cout << std::string(15,'-') << "\n";

    double total = 0.0;
    int numGrades = getCount(); //stores number of grades/classes in numGrades variable

    //for loop goes through each grade/class pair that exists
    //& prints formatted row
    for (int i = 0; i < numGrades; i++) {
        int numericGrade = getGrade(i);
        std::cout << std::left << std::setw(13) << getClass(i)
        << std::left << std::setw(2) << convertLetterGrade(numericGrade) << "\n";
        total += numericGrade;
    }
    std::cout << std::string(15,'-') << "\n";
    double average = total / numGrades; //calculates average & stores it in average variable
    std::cout << "Average: " << std::fixed 
    << std::setprecision(2) << average << "\n";
}