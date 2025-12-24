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
        int balance{0};
    public:
        //constructor initializes data member 'name' with the param accountName
        //never forget the type in the argument whenever you pass something to a function
        //this allows initialization of a private member when the instance is created in main
        //also pay attention to the signature, as it must match when created in main!
        //CONSTRUCTOR
        //use explicit for all single-parameter constructors
        Account(string accountName, int initialBalance)//param list, scope preserved here only
            :name{accountName}{// member list initialization, assignment, 
                //validating the initial balance of the bank account
                if(initialBalance > 0)
                    balance = initialBalance;
            }
        //getters
        string getName()const{
            return name;
        }
        int getBalance()const{
            return balance;
        }
        //both arguments can modify the private member
        //setters
        void setName(string& accountName) {//scope of param is preserved in setName
            name = accountName;
        }
        
        //method to deposit only valid amounts to the balance
        void deposit(int& depositAmount){
            if(depositAmount > 0)
                balance = balance + depositAmount;
        }
};