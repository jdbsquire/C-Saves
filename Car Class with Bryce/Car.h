#ifndef CAR_H
#define CAR_H
#include <string>
using std::string;


enum ADD_ONS { HEATED_SEATS=0, SUN_ROOF, AUDIO_SYSTEM, PERFORMANCE_PACKAGE, WINDOW_TINT, ROOF_RACK };
const string ADD_ON_COSTS = "750 1250 1500 5000 500 900";

class Car {
    public:
        Car();
        Car(long theVin, string theModel, string theMake, int theYear, string theColor, 
            int theMilage, int theMPG, double thePrice, string theAddOns, int theNumAddOns);

        // getter functions
        long getVIN();
        string getModel();
        string getMake();
        int getYear();
        string getColor();
        int getMilage();
        int getMPG();
        double getPrice();
        string getAddOn(int theAddOn);
        int getAddOnPrice(int index);

        // setter functions
        void setVIN(long theVIN);
        void setModel(string theModel);
        void setMake(string theMake);
        void setYear(int theYear);
        void setColor(string theColor);
        void setMilage(int theMilage);
        void setMPG(int theMPG);
        void setPrice(double thePrice);

        void selectAddOn(int addOnId);
        // returns monthly payment cost
        void simulatePayments(int numOfMonths, double apr);
        
    private:
        long vin;
        string model;
        string make;
        int year;
        string color;
        int milage;
        double mpg;
        double price;
        string addOns;
        int numAddOns;
};

#endif