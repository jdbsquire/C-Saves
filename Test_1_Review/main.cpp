
#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <sstream> //used by the int getGrade(int) function

using namespace std;

int main(){

    // Question 12
    // What is the output from the following code 
    // snippet. No partial credit, you must select 
    // ALL the output statements?
    try {
        cout << "Inside try block\n";
        // No exception thrown here
    } catch (int e) {
        cout << "Caught an integer: " << e << endl;
    }
    cout << "After try-catch block\n";
    // executed ln 17 and 22

    // Question 21
    // A function declared as void func(int x = 10); 
    // can be called as func(); without passing any arguments.
    // Prototype
    void fun(int x =0);
    //Functions must be defined outside of main.cpp
    //Called func
    fun(99);
    string catchFunc = "Better Now";
    cout << "This is catchFunc: " << catchFunc << "\n";
    
    // Question 22
    //Which of the following correctly allocates 
    //memory for 20 integers on the heap in C++?
    cout<<"Question 22, memory allocation\n";
    int* arr = new int[10];
    cout << "Size of arr is " << sizeof(arr) << "\n";

    // Question 23
    // What prints when the following code snippet is executed?
    int *p = new int[100];
    delete p;
    cout << "This is *p " << *p << endl;

    // Question 24
    //What will be the output when the following code snippet is run?
    //this involves pointers
    // I will try to track it
    int xPWatch = 5;
    cout << "Value of xPWatch is " << xPWatch << "\n";
    int *ptr = &xPWatch;
    cout << "Address of xPWatch from ptr is " << ptr << "\n";
    cout << "Address of xPWath from xPWatch is " << &xPWatch << "\n";
    *ptr = *ptr + 10;
    cout << "Value of xPWatch after dereference and add to 10 is " << xPWatch << endl;
    cout << "After the addition\n";
    cout << "Address of xPWatch from ptr is " << ptr << "\n";
    cout << "Address of xPWath from xPWatch is " << &xPWatch << "\n";
    cout << "Address of pointer ptr is " << &ptr << endl;
    
    //Question 25
    // What will print the First time through the 
    //second loop in this code snippet?
    int *ptr1 = new int[10];
    int n = 10;

    for(int i{0}; i < 10; i++){
        cout << "*(ptr1 + i) is " << *(ptr1 + i) << endl;
        *(ptr1 + i ) = i * 10;
    }

    //Print values using temp++ in the for loop control
    for(int *temp = ptr1; temp < ptr1 + 10; temp++){
        cout << "Value = " << *temp << endl;
    }

    //Free allocated memory
    delete[]ptr1;

    //Question 31
    //What will the output of the following code segment be
    int i{1};
    while ((i <= 5)){
        /* code */
        cout << ++i << " ";
    }

    cout << "\n";

    return 0;
}

    void fun(int x = 0){
        cout << "Inside func: " << x << "\n";
    }
