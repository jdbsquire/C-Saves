//Fig. 3.2 : Account.h
//Account class that contains a name data member
//and member functions to set and get its value
//Header and definition, in this rare case
#include <iostream>
#include <string>

using namespace std;

class Account{
    private:
        string name;
    public:
        string getName()const{
            return name;
        }

        void setName(string& accountName) {
            name = accountName;
        }
};