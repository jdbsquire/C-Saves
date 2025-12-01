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
     
     //Create Menu object
     Menu menu;

     //variables for use in the loop
     string sentinel = "",
            response = "";  

     // while loop to encapsulate the program
     while(sentinel != "drx"){

          //Display menu object
          // Go to the Menu class for the display of the menu
          cout << menu << "\n";

          // obtain the user's choice
          cout << "Which feature would you like to use? ";
          //argument to send to setMenuType
          int menuCode{0};
          // put the choice into the stream
          // getline only works with strings!!!!
          cin >> menuCode;

          //set menu type and run the code in that block
          menu.setMenuType(menuCode);

     // need some logic in here
     cout << "Would you like to run this feature again\n"
          << "y or n?\n";
     cin >> response;
     transform(response.begin(), response.end(),
               response.begin(),::toupper);
          //Does the user want to continue?
          if(response == "N")
               sentinel = "drx";
     }

    return 0;
}