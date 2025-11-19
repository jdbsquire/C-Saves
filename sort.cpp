#include <algorithm>
#include <array>
#include <cctype>
#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

int main(){

    //assign a name to a filename for use in the sorting program
    string fileName;
    fileName = "PersonSorted.txt";
    //open intended file
    ifstream infile(fileName);
    //see if the file opened
    if (!infile) {
        cerr << "Error opening " << fileName << endl;
        return 1;
    } else {
        cout  << "File Opened!\n";
    }

    //create vector to receive the file
    //need an associated class type in which to place the 
    //<objects>
    vector<SortedFile> people; 

    //close the file always
    infile.close();

    return 0;
}