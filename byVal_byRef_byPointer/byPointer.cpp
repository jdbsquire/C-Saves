#include <stdio.h>
#include <iostream>

using namespace std;

void passByPtr(int *ptr);

int main(){

    int x = 5;
    cout << "Original x = " << x << endl;

    int *ptr = &x;//name an address pointing to the address of x
    cout << "Value at location *ptr is: " << *ptr << endl;
    
    // call passByPtr
    passByPtr(ptr);
    cout << "Changed x = " << x << endl;
    cout << "Value at location *ptr is: " << *ptr << endl;

    return 0;
}

void passByPtr(int *ptr){
    //pass by pointer
    *ptr = 30;//change the value of the thing pointed to
    cout << " *ptr is " << *ptr << endl;
}