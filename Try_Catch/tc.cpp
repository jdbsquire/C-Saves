#include <iostream>
#include <array>
#include <stdexcept>
using namespace std;

int main(){

    const int NUM_SC0RES = 5;
    array<int, NUM_SC0RES> scores;

    cout << "Enter up to " << NUM_SC0RES 
        << " test scores (extra inputs will trigger an error):\n";

    int value;
    int index = 0;

    cout << "scores address"<< &scores << endl;
    cout << "values address"<< &value << endl;

    while(cin >> value && value != -1){

        try{
            scores.at(index) =  value;//scores is a class
            index++;//use value then increment
        }

        catch(out_of_range &e){//reserved word
            cout << "Error: Too many scores entered! (" <<
            e.what() << ")\n";// e is a class
            break;
        }
    }

    int sum = 0;
    for(int i = 0; i < index; i++){
        sum+= scores.at(i);
    }

    if(index > 0){
        double average = static_cast<double>(sum)/index;
        cout << "The average of" << index << "scores is : " << average << endl;
    } else {
        cout << "No valid scores entered.\n";
    }

    return 0;
}