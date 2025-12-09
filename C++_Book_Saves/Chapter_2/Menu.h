#ifndef MENU_H
#define MENU_H

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

class Menu{

        friend ostream& operator << (ostream&, Menu&);

        private:
                string type;

        public:
                Menu();
                Menu(const int&);
        //constructors

        //getters
        string getMenuType()const;

        //setters
        void setMenuType(const int&);

        //methods

};

#endif