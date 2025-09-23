#include <iostream>
#include <array>

using namespace std;

int main(){
    //create a fixed-size array of five integers
    array<int, 5> arr = {1, 2, 3, 4, 5,};

    //Access elements using []
    cout << "First element: " << arr[0] << endl;

    //Access with bounds checking
    cout << "Second element (using at()): " << arr.at(1) << endl;

    //Iterate with the range-based for
    cout << "Contents: ";
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;

    //Modify elements//
    arr[2] = 42;
    cout << "After modification: ";
    for (int x : arr){
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}