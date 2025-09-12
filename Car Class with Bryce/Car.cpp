#include "Car.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using std::cout;
using std::endl;

// default constructor
Car::Car() : vin(-1), model(""), make(""), year(-1), color(""), milage(-1), mpg(-1), price(-1),
             addOns(""), numAddOns(0) {}

// parameterized constructor
Car::Car(long theVin, string theModel, string theMake, int theYear, string theColor, 
    int theMilage, int theMPG, double thePrice, string theAddOns, int theNumAddOns)
    : vin(theVin), model(theModel), make(theMake), year(theYear), color(theColor), milage(theMilage),
    mpg(theMPG), price(thePrice), addOns(theAddOns), numAddOns(theNumAddOns) {}

long Car::getVIN() {
    return vin;
}

string Car::getModel() {
    return model;
}

string Car::getMake() {
    return make;
}

int Car::getYear() {
    return year;
}

string Car::getColor() {
    return color;
}

int Car::getMilage() {
    return milage;
}

int Car::getMPG() {
    return mpg;
}

double Car::getPrice() {
    return price;
}

string Car::getAddOn(int theAddOn) {
    string addOnStr;
    switch(theAddOn) {
        case HEATED_SEATS:
            addOnStr = "Heated Seats";
            break;
        case SUN_ROOF:
            addOnStr = "Sun Roof";
            break;
        case AUDIO_SYSTEM:
            addOnStr = "Audio System";
            break;
        case PERFORMANCE_PACKAGE:
            addOnStr = "Performance Package";
            break;
        case WINDOW_TINT:
            addOnStr = "Window Tint";
            break;
        case ROOF_RACK:
            addOnStr = "Roof Rack";
            break;
        default:
            addOnStr = "";
            cout << "Invalid add on selection." << endl;
    }
    return addOnStr;
}

void Car::setVIN(long theVIN) {
    vin = theVIN;
}

void Car::setModel(string theModel) {
    model = theModel;
}

void Car::setMake(string theMake) {
    make = theMake;
}

void Car::setYear(int theYear) {
    if(theYear > 1960 && theYear < 2025) {
        year = theYear;
    } else {
        cout << "Error: invalid year." << endl; 
    }
}

void Car::setColor(string theColor) {
    color = theColor;
}

void Car::setMilage(int theMilage) {
    if(theMilage >= 0) {
        milage = theMilage;
    } else {
        cout << "Error: invalid milage." << endl;
    }
}

void Car::setMPG(int theMPG) {
    if(theMPG >= 10 && theMPG <= 60) {
        mpg = theMPG;
    } else {
        cout << "Error: invalid mpg." << endl;
    }
}

void Car::setPrice(double thePrice) {
    if(thePrice > 0) {
        price = thePrice;
    } else {
        cout << "Error: invalid price." << endl;
    }
}

void Car::selectAddOn(int theAddOn) {
    addOns += (addOns == "") ? std::to_string(theAddOn) : " " + std::to_string(theAddOn);
}

int Car::getAddOnPrice(int index) {
    std::istringstream iss(ADD_ON_COSTS);
    std::string value;
    int counter(0);
    while(iss >> value) {
        if (counter++ == index) {
          return stoi(value);
        }
    }
    return -1;
}

void Car::simulatePayments(int numOfMonths, double apr) {
    cout << std::fixed << std::setprecision(2);
    cout << "Summary" << endl;
    cout << "-----------------------------------------" << endl;
    cout << std::left << std::setw(25) << "VIN" << "|" << std::right << std::setw(15) << vin << endl;
    cout << std::left << std::setw(25) << "Make" << "|" << std::right << std::setw(15) << make << endl;
    cout << std::left << std::setw(25) << "Model" << "|" << std::right << std::setw(15) << model << endl;
    cout << std::left << std::setw(25) << "Year" << "|" << std::right << std::setw(15) << year << endl;
    cout << std::left << std::setw(25) << "Color" << "|" << std::right << std::setw(15) << color << endl;
    cout << std::left << std::setw(25) << "Milage" << "|" << std::right << std::setw(15) << milage << endl;
    cout << std::left << std::setw(25) << "MPG" << "|" << std::right << std::setw(15) << mpg << endl;
    cout << std::left << std::setw(25) << "Base Price" << "|" << std::right << std::setw(15) << price << endl;
    std::istringstream iss(addOns);
    std::string value;
    int counter(0);
    int addOnTotal = 0;
    while(iss >> value) {
        int addOnIndex = stoi(value);
        int addOnPrice = getAddOnPrice(addOnIndex);
        addOnTotal += addOnPrice;
        cout << std::left << std::setw(25) << getAddOn(addOnIndex) << "|" 
             << std::right << std::setw(15) << addOnPrice << endl;
    }
    cout << "-----------------------------------------" << endl;
    double totalCost = price + addOnTotal;
    cout << "Total Cost: " << totalCost << endl;
    double monthlyCost = ((totalCost * (apr/100)) + totalCost) / numOfMonths;
    cout << "Monthly Payments (over " << numOfMonths << " months): " << monthlyCost << endl << endl;

}
