#include "Chpt_2.h"
#include "Menu.h"

#include <algorithm>
#include <array>
#include <cctype>
#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

int main(){

     //TESTING THE SCOPE OF Chpt_2
     //Chpt_2 test;
     //test.setSum(5, 9);
     //cout << test.getSum() << "\n";
     
     //Create Menu object
     Menu menu;

     //variables for use in the loop
     string sentinel = "",
            response = "";  
     int menuCode{0};

     // while loop to encapsulate the program
     while(sentinel != "drx"){

          //Display menu object
          // Go to the Menu class for the display of the menu
          cout << menu << "\n";

          // obtain the user's choice
          cout << "Which feature would you like to use? ";
          cin >> response;
          if(response == "Q" || response == "q"){
               sentinel = "drx";
          } else {
               //argument to send to setMenuType

               // put the choice into the stream
               // getline only works with strings!!!!
               menuCode = stoi(response);               

          //set menu type and run the code in that block
          menu.setMenuType(menuCode);

     // need some logic in here
     cout << "Would you like to run this feature again\n"
          << "y or n?\n";
     cin >> response;
     transform(response.begin(), response.end(),
               response.begin(),::toupper);
          //Does the user want to continue?
          if(response == "Q"){
               sentinel = "drx";
          } else if (response == "N"){
               /* code */
               cout << "BACK TO HOME SCREEN\n";
          } else if (response == "Y"){
               while (response == "Y"){
                    menu.setMenuType(menuCode);
                    //sentinel oportunity
                    cout << "Would you like to run this feature again\n"
                         << "y or n?\n";
                    cin >> response;
                    transform(response.begin(), response.end(),
                              response.begin(),::toupper);
               }
               if(response == "Q")
                    sentinel = "drx";
               /* code */
               //menu.setMenuType(menuCode);
          }          
     }
     }

    return 0;
}