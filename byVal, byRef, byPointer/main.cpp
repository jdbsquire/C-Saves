#include <stdio.h>
#include <iostream>byRef

void passByVal(int val);// copy of the variable value

void passByVal(int &ref);// actual variable value

void passByPtr(int *ref);// pass by pointer

int main(){

    return 0;
}

void passByVal(int val){
    // copy of the variable value
    val = 10;
    cout << "val is: " << val << endl;
}

void passByVal(int &ref){
    // actual variable value
    ref = 20;
    cout << "reference val is" << ref << endl;
}

void passByPtr(int *ptr){
    // pass by pointer
    *ptr = 30;// change the value of the thing pointed to 
    cout << " *ptr is " << *ptr << endl;

}