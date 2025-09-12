#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

enum ADD_ONS {HEATED_SEATS=0, SUN_ROOF, AUDIO_SYSTEM, 
              PERFORMANCE_PACKAFGE, WINDOW_TINT, ROOF_RACK}

string ADD_ON_COSTS = "750 1250 1500 5000 500 900";


class Car {
    private:
        long vin;
        string model;
        string make;
        int year;
        string color;
        int mileage;
        double mpg;
        double price; 
        string addOns;

    public:
        Car();
        Car(long theVin, string theModel, string theMake, int theYear,
            string theColor, int theMileage, double theMPG, double thePrice,
            string theAddOns); 
    

    //getters
    long getVin();
    string getModel();
    int getYear();
    string getColor();
    int getMileage();
    int getMPG();
    double getPrice();
    string getAddON(int theAddOn);
    int getAddOnPrice(int index);

    //setters
    void setVIN(long theVIN);
    void setModel(string theModel);
    void setMake(string theMake);
    void setYear(int theYear);
    void setColor(string theColor);
    void setMileage(int theMileage);
    void serMPG(double theMPG);
    void setPrice(double thePrice);

    //methods
    void selectAddOn(int addOnId);
    void simulatePayment();

};

#endif