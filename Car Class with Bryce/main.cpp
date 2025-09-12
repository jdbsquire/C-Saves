#include "Car.h"

int main() {
    Car car1(12345, "Mazda", "3", 2020, "Red", 20000, 25, 15250.0, "0 3", 2);
    car1.simulatePayments(48, 2.5);
    car1.selectAddOn(2);
    car1.selectAddOn(5);
    car1.simulatePayments(48, 2.5);
    car1.simulatePayments(72, 2.5);
    return 0;
}