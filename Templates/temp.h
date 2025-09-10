#ifndef NAME_H
#define NAME_H

#include <string>

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