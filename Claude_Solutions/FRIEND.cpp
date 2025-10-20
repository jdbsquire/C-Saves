#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string street;
    string city;
    int zip;

public:
    friend istream& operator >> (istream& is, Address& addr);
    friend ostream& operator << (ostream& os, const Address& addr);
};

istream& operator >> (istream& is, Address& addr) {
    cout << "Street: ";
    getline(is, addr.street);
    cout << "City: ";
    getline(is, addr.city);
    cout << "Zip: ";
    is >> addr.zip;
    is.ignore();
    return is;
}

ostream& operator << (ostream& os, const Address& addr) {
    os << addr.street << ", " << addr.city << " " << addr.zip;
    return os;
}

int main() {
    Address home;
    
    cout << "Enter your address:\n";
    cin >> home;  // Uses overloaded >>
    
    cout << "\nYou entered: " << home << endl;  // Uses overloaded 
    
    return 0;
}