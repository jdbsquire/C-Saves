#include "Car.h"
#include <iostream>
#include <iomanip>

#include <string>
#include <sstream>

using namespace std;

Car::Car() : vin(-1), model(""), year(-1), color(""),
    mileage(-1), mpg(-1), addOns("") {}

Car::Car(long theVin, string theModel, string theMake, int theYear,
            string theColor, int theMileage, double theMPG, double thePrice,
            string theAddOns) {}