#include <stdio.h>
#include <iostream>

using namespace std; 

void passByVal(int val);// copy of the variable value

void passByRef(int &ref);// actual variable value

void passByPtr(int *ptr);// pass by pointer


int main(){
    int x = 5;
    cout << "Original x = " << x << endl;

    passByVal(x);
    cout << "byVal x = " << x << " because I sent an immutable copy to the function" 
        <<endl;
    passByRef(x);
    cout << "byREf x = " << x <<" changed because I gave the program the keys." 
         << endl;
    //passByPtr(x);
    return 0;
}


void passByVal(int val){
    // copy of the variable value
    val = 10;
    cout << "function val is: " << val << endl;
}

void passByRef(int &ref){
    // actual variable value
    ref = 20;
    cout << "reference val is " << ref << endl;
}

void passByPtr(int *ptr){
    // pass by pointer
    *ptr = 30;// change the value of the thing pointed to 
    cout << " *ptr is " << *ptr << endl;

}