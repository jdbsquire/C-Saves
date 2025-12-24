//Fig. 3.1 : AccountTest.cpp
//Creating and manipulating an Account object
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main(){
    Account myAccount("James Boyce", 50);//create Account object myAccount
    Account myAccount2{"John Doe", 0};
    Account myAccount3("", 0);
    //testing initialization
    cout << "Account one is " << myAccount.getName() 
         << " with a balance of: " << myAccount.getBalance() << "\n"
         << "Account two is " << myAccount2.getName() 
         << " with a balance of: " << myAccount2.getBalance() << "\n\n";

    //         ACCOUNT ONE
    cout << "Enter deposit amount for Account one: ";
    int depositAmount{0},
        withdrawalAmount{0};
    cin >> depositAmount;
    cout << "Adding $" << depositAmount << " to account one balance\n\n";
    myAccount.deposit(depositAmount);//method to add deposit amount to the balance
    cout << "Enter withdrawal amount from Account one: ";
    cin >> withdrawalAmount;
    cout << "Withdrawaling $" << withdrawalAmount << " from account one balance\n\n";
    myAccount.withdrawal(withdrawalAmount);

    //display balances
    cout << "Account one: " << myAccount.getName() << " balance is: $" 
         << myAccount.getBalance() << "\n"
         << "Account2: " << myAccount2.getName() << " balance is: $"
         << myAccount2.getBalance() << "\n\n";
     // reinitialize depositAmount
     depositAmount = 0;
     withdrawalAmount = 0;

     //        ACCOUNT TWO
     cout << "Enter deposit amount for Account two: ";
     cin >> depositAmount;
     cout << "Adding $" << depositAmount << " to account two balance\n\n";
     myAccount2.deposit(depositAmount) ;// method added deposit to myAccount2
     cout << "Enter withdrawal amount from Account two: ";
     cin >> withdrawalAmount;
     cout << "Withdrawaling $" << withdrawalAmount << " from account two balance\n\n";
     myAccount2.withdrawal(withdrawalAmount);

     //display new balances
     cout << "Account one: " << myAccount.getName() << " balance is: $"
          << myAccount.getBalance() << "\n"
          << "Account two: " << myAccount2.getName() << " balance is: $"
          << myAccount2.getBalance() << "\n\n";

    //show that the initial value of myAccount's name is the empty string
    cout << "Initial account name is: " << myAccount.getName();

    //prompt for and read name
    cout << "\nPlease enter the account owner's name: ";
    string theName;
    //cin.ignore();
    getline(cin, theName);//read the line of text
    myAccount3.setName(theName);// put theName in myAccount

    //display the name stored in object myAccount
    cout << "\nName in object myAccount is: "
         << myAccount.getName() << endl;

    return 0;

}