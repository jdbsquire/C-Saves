#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    //create a vector with initial values
    vector<int> vec = {1, 2, 3, 4, 5};

    //access elements using []
    cout << "First element: " << vec[0] << endl;

    //access with bounds checking
    cout << "Second element (using at())" << vec.at(1) << endl;

    //Size of the vector
    cout << "Vector size: " << vec.size() << endl;

    //iterate with range-based for
    cout << "Contents: ";
    for (int x : vec){
        cout << x << " ";
    }

    cout << endl; 

    //modify elements
    vec[2] = 42;
    vec.at[2] = 42; //safe, secure, guardrails
    
    //add elements at the end
    vec.push_back(99);
    vec.push_back(100);
    cout << "After modification and push_back: ";
    for(int x : vec){
        cout << x << " ";
    }
    cout << endl;

    //Remove last element
    vec.pop_back();
    cout << "After pop_back: ";
    for (int x : vec){
        cout << x << " ";
    }
    cout << endl; 

    //use sort
    sort(vec.begin, vec.end());
    cout << "After sorting: ";
    for (int x : vec){
        cout << x << " ";
    }
    cout << endl;

    //Erase
    vec.erase(vec.begin() + 2);
    cout << "After erasing 3rd element: ";
    for(int x : vec){
        cout << x << endl;
    }
    cout << endl;

    return 0;
}