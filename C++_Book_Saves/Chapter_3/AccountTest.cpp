//Fig. 3.1 : AccountTest.cpp
//Creating and manipulating an Account object
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main(){
    Account myAccount("James Boyce", 50);//create Account object myAccount
    Account myAccount2{"John Doe", -7};
    Account myAccount3("", 0);
    //testing initialization
    cout << "Account one is: " << myAccount.getName() 
         << " with a balance of: " << myAccount.getBalance() << "\n"
         << "Account two is: " << myAccount2.getName() 
         << " with a balance of: " << myAccount2.getBalance() << "\n";

    cout << "Enter deposit amount for Account one: ";
    int depositAmount{0};
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account one balance\n";
    myAccount.deposit(depositAmount);//method to add deposit amount to the balance

    //display balances
    cout << " account one: " << myAccount.getName() << " balance is: $" 
         << myAccount.getBalance();
         << "account2: " << myAccount2.getName() << " balance is: $"
         << myAccount2.getBalance();
    


    //show that the initial value of myAccount's name is the empty string
    cout << "Initial account name is: " << myAccount.getName();

    //prompt for and read name
    cout << "\nPlease enter the account name: ";
    string theName;
    //cin.ignore();
    getline(cin, theName);//read the line of text
    myAccount3.setName(theName);// put theName in myAccount

    //display the name stored in object myAccount
    cout << "Name in object myAccount is: "
         << myAccount.getName() << endl;

    return 0;

}