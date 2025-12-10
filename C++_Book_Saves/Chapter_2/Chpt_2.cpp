#include "Chpt_2.h"

using namespace std;

/****************** 2.16 Start ********************************************/

Chpt_2::Chpt_2(){
    num1 = 0;
    num2 = 0;
    result = 0;
    newType = "";
}

Chpt_2::Chpt_2(const float& Inum1, const float& Inum2){
    //Inum1=0;
    //Inum2=0;
}

float Chpt_2::getSum()const{
    return newSum;
}

float Chpt_2::getProduct()const{
    return newProduct;
}

float Chpt_2::getDifference()const{
    return newDifference;
}

float Chpt_2::getQuotient()const{
    return newQuotient;
}

string Chpt_2::getType()const{
    return newType;
}

float Chpt_2::getThreeSum()const{
    return threeSum;
}

float Chpt_2::getThreeProd()const{
    return threeProd;
}

float Chpt_2::getThreeAvg()const{
    return threeAvg;
}

float Chpt_2::getSmallest()const{
    return smallest;
}

float Chpt_2::getLargest()const{
    return largest;
}

string Chpt_2::getThreeIntegers()const{
    return threeIntegers;
}
//    2.20 ****************************
int Chpt_2::getDiameter()const{
    return diameter;
}

int Chpt_2::getCircumference()const{
    return circumference;
}

int Chpt_2::getArea()const{
    return area;
}

string Chpt_2::getFiveIntegers()const{
    return fiveIntegers;
}

string Chpt_2::getOddEven()const{
    return oddEven;
}

string Chpt_2::getMultiple()const{
    return multipleResult;
}

int Chpt_2::getChar()const{
    return intNum1;
}

string Chpt_2::getParseString()const{
    return strNum1;
}

int Chpt_2::getSquare()const{
    return square;
}

int Chpt_2::getCube()const{
    return cube;
}

float Chpt_2::getBMI()const{
    return num1;
}

string Chpt_2::getSelfDrive()const{
    return selfDrive;
}

string Chpt_2::getShareUber()const{
    return uber;
}

string Chpt_2::getShareLyft()const{
    return lyft;
}
/************************************************************************************
 * **********************************************************************************
 * **********************************************************************************
 */
//setters
void Chpt_2::setSum(const float& val1, const float& val2){
    newSum = val1 + val2;
}

void Chpt_2::setProduct(const float& val1, const float& val2){
    newProduct = val1 * val2;
}

void Chpt_2::setDifference(const float& val1, const float& val2){
    newDifference = val1 - val2;
}

void Chpt_2::setQuotient(const float& val1, const float& val2){
    newQuotient = val1 / val2;
}

void Chpt_2::setType(string& newFeature){
    newType = newFeature;
}

void Chpt_2::setParseString(string& newString){
    //using istringstream to parse the incoming string
    threeIntegers = newString;
    //will perform the parsing
    istringstream threeInts(newString);
    string stringNum1 = "",
           stringNum2 = "",
           stringNum3 = "";
    //read the result and convert into the three floats
    threeInts >> stringNum1 >> stringNum2 >>stringNum3;
    num1 = stof(stringNum1);
    num2 = stof(stringNum2);
    num3 = stof(stringNum3);

    //Process block
    threeSum = num1 + num2 + num3;
    threeAvg = threeSum/3;
    threeProd = num1 * num2 * num3;

    //SORTING AND FINDING DESIRED VALUES FROM A VECTOR
    //using minmax
    vector<float> myVector = {num1, num2, num3};
    auto minmax = minmax_element(myVector.begin(), myVector.end());
    //find smallest
    smallest = *minmax.first;
    //find largest
    largest = *minmax.second;
}
//      2.23 **********************
void Chpt_2::setFiveIntegers(string& newString){
    //using istringstream to parse the incoming string
    fiveIntegers = newString;
    //will perform the parsing
    istringstream fiveInts(newString);
    string stringNum1 = "",
           stringNum2 = "",
           stringNum3 = "",
           stringNum4 = "",
           stringNum5 = "";
    //read the result and convert into the three floats
    fiveInts >> stringNum1 >> stringNum2 >> stringNum3 >> stringNum4 >> stringNum5;
    num1 = stof(stringNum1);
    num2 = stof(stringNum2);
    num3 = stof(stringNum3);
    num4 = stof(stringNum4);
    num5 = stof(stringNum5);

    //SORTING AND FINDING DESIRED VALUES FROM A VECTOR
    //using minmax
    vector<float> myVector = {num1, num2, num3, num4, num5};
    auto minmax = minmax_element(myVector.begin(), myVector.end());
    //find smallest
    smallest = *minmax.first;
    //find largest
    largest = *minmax.second;
}
//    2.23 ****************
//      2.20 *************************
void Chpt_2::setRadius(int& r){
    diameter = 2*r;
    circumference = 2*3.14159*r;
    area = r*r*3.14159;
}

void Chpt_2::setOneInteger(string& i){
    oneInteger = i;
    istringstream oneInt(i);
    string stringNum1 = "";
    oneInt >> stringNum1;
    intNum1 = stoi(stringNum1);
    vector<int> myVector = {intNum1};
    if(myVector[0] % 2 == 0){
        oddEven = to_string(myVector[0]) + " is an even integer.";
    } else {
        oddEven = to_string(myVector[0]) + " is an odd integer.";
    }
}

void Chpt_2::setMultiple(string& n1){
    multipleResult = n1;
    istringstream multiple(multipleResult);
    multiple >> strNum1 >> strNum2;
    vector<int> myVector = {stoi(strNum1), stoi(strNum2)};
    if(myVector[0] % myVector[1] == 0){
        multipleResult = strNum1 + " is a multiple of " + strNum2;
    } else {
        multipleResult = strNum1 + " is not a multiple of " + strNum2;
    }
}

void Chpt_2::setChar(char& ch){
    intNum1 = static_cast<int>(ch);
}

void Chpt_2::setFiveDigitString(string& five){
    //for loop to parse the integer into a vector
    vector<char> myVectorString;
    for (int i{0}; i < 5; i++){
        myVectorString.push_back(five[i]);
        myVectorString.push_back(' ');
        //strNum1 = five[i] + " ";
    }
    
    string newStrNum1(myVectorString.begin(), myVectorString.end());//five[0];// + ' ' + five[1] + ' ';
    strNum1 = newStrNum1;
}

void Chpt_2::setPower(int& p){
    square = pow(p, 2);
    cube = pow(p, 3);
}

void Chpt_2::setBMI(float& w, float& h){
    num1 = (w * 703) / (h*h);
}

void Chpt_2::setSelfOrShare(string& ride){
    istringstream rideShare(ride);
    rideShare >> totalMiles >> costPerGal >> milesPerGal >> parking
              >> tolls >> floatUber >> floatLyft;
    //float tm = stof(totalMiles);
    vector<float> myVector = {(totalMiles), (costPerGal), (milesPerGal),
                              (parking), (tolls), (floatUber), 
                              (floatLyft)};
    //temporary variable to hold the total from miles, cost, parking, tolls
    float temp = (myVector[1] * myVector[2]) + myVector[3] + myVector[4];
    selfDrive = to_string(temp);
    uber = to_string(floatUber);
    lyft = to_string(floatLyft);
}
/***************************************************************************************
 * ************************************************************************************
 * *************************************************************************************
 */
//Methods 
//One method in main to gather all the values
//computations performed inside the class
void Chpt_2::captureValues(const float& val1, const float& val2){
     Chpt_2::setSum(val1, val2);
     Chpt_2::setProduct(val1, val2);
     Chpt_2::setDifference(val1, val2);
     Chpt_2::setQuotient(val1, val2);
}
void Chpt_2::concatenate(const int& Inum1, const int& Inum2, const int& Inum3, const int& Inum4){
    cout << "Using one stream operator: ";
    //convert numbers to strings separated by a space
    string concatOneLine = to_string(Inum1) + " " +
                           to_string(Inum2) + " " +
                           to_string(Inum3) + " " +
                           to_string(Inum4);
    cout << concatOneLine << "\n";
    cout << "Using four stream operators: "
         << Inum1 << " " << Inum2 << " " << Inum3 << " " << Inum4 << "\n";
    cout << "Using four stream statements\n";
    cout << "Statement 1: " << Inum1 ;
    cout << " Statement 2: " << Inum2 ;
    cout << " Statement 3: " << Inum3 ;
    cout << " Statement 4: " << Inum4 << "\n";
}

 void Chpt_2::compare(const int& Inum1, const int& Inum2){
    //test for equality first
    if(Inum1 == Inum2){
        cout << Inum1 << " and " << Inum2 << " are equal integers.\n";
    } else if (Inum1 > Inum2){
        //cout the larger number
        cout << Inum1 << " is greater than " << Inum2 << "\n";        
    } else {
        cout << Inum2 << " is greater than " << Inum1 << "\n";
    }
 }

 void Chpt_2::shapes(){
  //will use string multiplier for this method
  //line 1 box
  cout << string(15,'*') << string(11, ' ') 
        // CIRCLE
       << string(6, '*') << string(11, ' ') 
        // Arrow
       << string(1, '*') << string(13, ' ') 
        // Diamond
       << string(1, '*') << "\n"
       //line 2
       //Box
       << string(1, '*') << string(13, ' ') << string(1, '*') << string(10, ' ')
       //Circle
       << string(1, '*') << string (6, ' ') << string(1, '*') << string(9, ' ')
       //Arrow
       << string(3, '*') << string(11, ' ') 
       //Diamond
       << string (1, '*') << string(1, ' ') << string(1, '*') << "\n"
       //line3
       //Box
       << string(1, '*') << string(13, ' ') << string(1, '*') << string(9, ' ')
       //Circle
       << string(1, '*') << string(8, ' ') << string(1, '*') << string(7, ' ')
       //Arrow
       << string(5, '*') << string(9, ' ') 
       //Diamond
       << string(1, '*') << string(3, ' ') << string(1, '*') << "\n"
       //line 4
       //Box
       << string(1, '*') << string(13, ' ') << string(1, '*') << string(9, ' ')
       //Circle
       << string(1, '*') << string (8, ' ') << string(1, '*') << string(9, ' ')
       //Arrow
       << string(1, '*') << string(10, ' ')
       //Diamond
       << string(1, '*') << string(5, ' ') << string(1, '*') << "\n"
       //Line 5
       //Box
       << string(1, '*') << string(13, ' ') << string(1, '*') << string(9, ' ')
       //Circle
       << string(1, '*') << string (8, ' ') << string(1, '*') << string(9, ' ')
       //Arrow
       << string(1, '*') << string(9, ' ')
       //Diamond
       << string(1, '*') << string(7, ' ') << string(1, '*') << "\n"
       //Line 6
       //Box
       << string(1, '*') << string(13, ' ') << string(1, '*') << string(9, ' ')
       //Circle
       << string(1, '*') << string(8, ' ') << string(1, '*') << string(9, ' ')
       //Arrow
       << string(1, '*') << string(10, ' ')
       //Diamond
       << string(1, '*') << string(5, ' ') << string(1, '*') << "\n"
       //Line 7
       //Box
       << string(1, '*') << string(13, ' ') << string(1, '*') << string(9, ' ')
       //Circle
       << string(1, '*') << string(8, ' ') << string(1, '*') << string(9, ' ')
       //Arrow
       << string(1, '*') << string(11, ' ')
       //Diamond
       << string(1, '*') << string(3, ' ') << string(1, '*') << "\n"
       //Line 8
       //Box
       << string(1, '*') << string(13, ' ') << string(1, '*') << string(10, ' ')
       //Circle
       << string(1, '*') << string(6, ' ') << string(1, '*') << string(10, ' ')
       //Arrow
       << string(1, '*') << string(12, ' ')
       //Diamond
       << string(1, '*') << string(1, ' ') << string(1, '*') << "\n"
       //Line 9
       //Box
       << string(15,'*') << string(11, ' ') 
       // CIRCLE
       << string(6, '*') << string(11, ' ') 
       // Arrow
       << string(1, '*') << string(13, ' ') 
       // Diamond
       << string(1, '*') << "\n";
 }

 void Chpt_2::checkerboard(){
    for(int i{0}; i < 8; i++){
        if(i % 2 == 0){
            for(int j{0}; j < 8; j++){
                cout << "* ";
            }
            cout << "\n";
        } else {
            for(int k{0}; k < 8; k++){
                cout << " *";
            }
            cout << "\n";
        }
    }
 }

//I'm defining a script for this operator
istream& operator >> (istream& is, Chpt_2& chpt2){
    //Greet and information from the user
    //If Else tree to perform the correct feature
    if(chpt2.newType == "Arithmetic"){
        cout << "              2.16\n"
            << "This is the Arithmetic feature.\n"
            << "This feature will take two numbers and \n"
            << "display their sum, product, difference and \n"
            << "quotient.\n"

        // You must use the dot operator to tell the program that this
        // num is the one you mean
        << "        Arithmetic\n"
        << "Enter the first number: ";
        cin >> chpt2.num1;

        cout << "Enter the second number: ";
        cin >> chpt2.num2;

        //cout << chpt2.num1 << " " << chpt2.num2 << "\n";
        //send the two values for evaluation
        chpt2.captureValues(chpt2.num1, chpt2.num2);
    }else if (chpt2.newType == "Stream Insertion"){
        cout << "                2.17\n"
             << "This is the Stream Insertion feature.\n"
             << "This feature will take four integers and print\n"
             << "them on one line.\n"
             << "The functionality is demonstrated under the hood\n"
             << "and you will only see the final result on the screen.\n"
             << "You will see a line of intergers printed with one stream insertion operator.\n"
             << "The next line will demonstrate the same line, but with four stream insertion operators\n"
             << "The last line is created using four statements.\n\n"
             << "           Stream Insertion\n"
             << "Enter the first number: ";
             cin >> chpt2.num1;
             cout << "Enter the second number: ";
             cin >> chpt2.num2;
             cout << "Enter the third number: ";
             cin >> chpt2.num3;
             cout << "Enter the fourth number: ";
             cin >> chpt2.num4;
        cout << "\n";
    }else if (chpt2.newType == "Compare Integers"){
        cout << "                       2.18\n"
             << "This feature compares two integers.\n"
             << "It will print the larger number followed by this integer is larger\n"
             << "If the numbers are equal it will print equal.\n"
             << "               Compare Integers\n"
             << "Enter the first number: ";
             cin >> chpt2.num1;
             cout << "Enter the second number: ";
             cin >> chpt2.num2;

    }else if (chpt2.newType == "Arth, Small to Largest"){
        cout << "                       2.19\n"
             << "This feature obtains three integers from the user.\n"
             << "Then it prints the sum, average, product, smallest and largest\n"
             << "of the three numbers.\n";
             //clear the leftover newline character
             // to prevent exposure in the getline()
             cin.ignore();
             string threeInts = "";
             //will use getline(cin, var); in this feature
             cout << "Input three different integers: ";
             getline(cin, threeInts);
             //cout << "Entered: " << threeInts << "\n";
             chpt2.setParseString(threeInts);
            
    }else if (chpt2.newType == "Circle"){
        cout << "                       2.20\n"
             << "This feature will take the radius of a circle in feet\n"
             << "then print the circle's diameter, circumference and area.\n"
             << "Results are in integers, which truncates floating-point values.\n"
             << "Enter the radius of the circle: ";
             int area{0};
             cin >> area;
             chpt2.setRadius(area);
        
    }else if (chpt2.newType == "Shapes"){
        cout << "                       2.21\n"
             << "This feature will generate four shapes on the screen.\n"
             << "All of the logic is done under the hood, without loops.\n"
             << "Next time the block will be in its own classs with loops.\n";
        
    }else if (chpt2.newType == "Largest to Smallest"){
        cout << "                       2.23\n"
             << "This feature will generate the smallest and largest integer\n"
             << "out of five integers.\n"
             << "Enter five integers: ";
             cin.ignore();
             string fiveIntegers = "";
             cout << "Enter five different integers: ";
             getline(cin, fiveIntegers);
             chpt2.setFiveIntegers(fiveIntegers);
        //inside of istream
        
    }else if (chpt2.newType == "Odd or Even"){
        //INSIDE OF ISTREAM
        cout << "                       2.24\n"
             << "This feature will tell the user if an integer is odd or even.\n"
             << "Enter an integer: ";
             cin.ignore();
             string oneInteger = "";
             //cout << "Enter an integer: ";
             getline(cin, oneInteger);
             chpt2.setOneInteger(oneInteger);
        
    }else if (chpt2.newType == "Multiple Of"){
        //INSIDE OF ISTREAM
        cout << "                       2.25\n"
             << "This feature will read two integers and determine if the first\n"
             << "integer is a multiple of the second.\n"
             << "Enter two integers: ";
             cin.ignore();
             string twoIntegers = "";
             getline(cin, twoIntegers);
             chpt2.setMultiple(twoIntegers);
        
    }else if (chpt2.newType == "Checker Board"){
        cout << "                       2.26\n"
             << "This feature will display a checkerboard pattern.\n"
             << "Simple for loops are generating the image.\n";
        
    }else if (chpt2.newType == "Char to Int"){
        cout << "                       2.27\n"
             << "This feature will print the integer equivalent of one \n"
             << "character from the keyboard.\n"
             << "Enter a character from the keyboard: ";
             cin.ignore();
             //will need some validation logic here to ensure that one character
             //is selected
             getline(cin, chpt2.oneInteger);
             //necessary conversion from the string type
             chpt2.newChar = chpt2.oneInteger[0];
             chpt2.setChar(chpt2.newChar);
        
    }else if (chpt2.newType == "Parse the Integer"){
        cout << "                       2.28\n"
             << "This feature will take a five-digit integer and parse each\n"
             << "number of the integer into a display.\n"
             << "Enter a five-digit integer from the keyboard: ";
             cin.ignore();
             //will need to validate a five-digit integer
             getline(cin, chpt2.fiveIntegers);
             chpt2.setFiveDigitString(chpt2.fiveIntegers);
        
    }else if (chpt2.newType == "Squares and Cubes"){
        cout << "                       2.29\n"
             << "This feature will print the squares and cubes of ten consecutive\n"
             << "integers in a table.\n"
             << "All functionality is done under the hood.\n";
        
    }else if (chpt2.newType == "BMI"){
        //chpt2.num1 = 0.0;
        cout << "                       2.30\n"
             << "This feature will calculate BMI for a weight and height.\n"
             << "Enter your weight in lbs: ";
             cin.ignore();
             getline(cin, chpt2.strNum1);
        cout << "Enter your height in inches: ";
             //cin.ignore();
             getline(cin, chpt2.strNum2);
             chpt2.num2 = stof(chpt2.strNum1);
             chpt2.num3 = stof(chpt2.strNum2);
        chpt2.setBMI(chpt2.num2, chpt2.num3);
        //cout << chpt2.num2 << " " << chpt2.num3 << "\n";
    }else if (chpt2.newType == "Carpool"){
        cout << "                       2.31\n"
             << "This feature will display the possible savings of carpooling\n"
             << "to work instead of driving alone to work.\n"
             << "Enter the total miles (round trip) driven per day \n"
             << "cost per gallon of gas, average miles per gallon,\n"
             << "parking fees and tolls, Uber and Lyft fees: ";
             cin.ignore();
             getline(cin, chpt2.strNum1);
        chpt2.setSelfOrShare(chpt2.strNum1);
    }

    return is;
}

ostream& operator << (ostream& os, Chpt_2& display){
    //If Else tree to perform the correct feature
    if(display.newType == "Arithmetic"){
        // Display the results of the Arithmetic
        cout << "SUM: " << display.getSum() << "\n" <<
            "MULTIPLY: " << display.getProduct() << "\n" <<
            "SUBTRACT: " << display.getDifference() << "\n" <<
            "QUOTIENT: " << display.getQuotient() << "\n";
    } else if(display.newType == "Stream Insertion"){
        //call the concatenate method
        display.concatenate(display.num1, display.num2, 
              display.num3, display.num4);
        cout << "\n";
    } else if(display.newType == "Compare Integers"){
        //call the compare method and cout
        display.compare(display.num1, display.num2);
        //cout << "\n";
    } else if(display.newType == "Arth, Small to Largest"){
        cout << "Three different integers: "
             << display.getThreeIntegers() << "\n"
             << "Sum is " << display.getThreeSum() << "\n"
             << "Average is " << display.getThreeAvg() << "\n"
             << "Product is " << display.getThreeProd() << "\n"
             << "Smallest is " << display.getSmallest() << "\n"
             << "Largest is " << display.getLargest() << "\n";

    } else if(display.newType == "Circle"){
        cout << "Measurements of this Circle: \n"
             << "Diameter is: " << display.getDiameter() << " ft.\n"
             << "Circumference is: " << display.getCircumference() << " ft.\n"
             << "Area is: " << display.getArea() << " ftsq.\n";

    } else if(display.newType == "Shapes"){
        cout << "      Box                 Circle         Arrow        Diamond\n";
        // no cout statement just call the method
        display.shapes();

    } else if(display.newType == "Largest to Smallest"){
        cout << "Five different integers: "
             << display.getFiveIntegers() << "\n"
             << "Smallest integer is: " << display.getSmallest() << "\n"
             << "Largest integer is: " << display.getLargest() << "\n";
        //inside of ostream
    } else if(display.newType == "Odd or Even"){
        //INSIDE OF OSTREAM
        cout << display.getOddEven() << "\n";

    } else if(display.newType == "Multiple Of"){
        cout << display.getMultiple() << "\n";

    } else if(display.newType == "Checker Board"){
        display.checkerboard();

    } else if(display.newType == "Char to Int"){
        cout << "The integer equivalent ASCII code for " << display.oneInteger
             << " is " << display.getChar() << "\n";

    } else if(display.newType == "Parse the Integer"){
        cout << display.fiveIntegers << " parsed is \n" 
             << display.getParseString() << "\n";

    } else if(display.newType == "Squares and Cubes"){
        cout << "Integer     Square      Cube\n";
             for(int i{0}; i < 11; i++){
                display.setPower(i);
                if(i >= 0 && i < 4){
                    cout << i << string(13, ' ') << display.getSquare() 
                        << string(11, ' ') << display.getCube() << "\n";
                } else if(i >= 4 && i <= 9){
                    cout << i << string(13, ' ') << display.getSquare() 
                        << string(10, ' ') << display.getCube() << "\n";                    
                } else if (i = 10){
                    cout << i << string(12, ' ') << display.getSquare() 
                        << string(9, ' ') << display.getCube() << "\n";
                }
             }

    } else if(display.newType == "BMI"){
        cout << "Department of Health and Human Services\n"
             << "National Institutes of Health\n"
             << "         Body Mass Index Calculator\n"
             << "BMI VALUES\n"
             << "Underweight: less than 18.5\n"
             << "Normal:      between 18.5 and 24.9\n"
             << "Overwieght: between 25 and 29.9\n"
             << "Obese:       30 or greater\n\n"
             << "Your BMI is: " << display.getBMI() << "\n";

    } else if(display.newType == "Carpool"){
        cout << "Total miles driven per day: " << (display.totalMiles) << "\n"
             << "Cost per gallon of gas:     " << display.costPerGal << "\n"
             << "Average miles per gallon:   " << display.milesPerGal << "\n"
             << "Parking fees:               " << display.parking << "\n"
             << "Tolls per day:              " << display.tolls << "\n"
             << "Total cost per day:         " << display.getSelfDrive() << "\n"
             << "Taking Uber:                " << display.getShareUber() << "\n"
             << "Taking Lyft:                " << display.getShareLyft() << "\n"
             << "Amount saved driving self:  " << display.getSelfDrive() << "-" << display.getShareUber();
             //float self = display.getSelfDrive();
             //float uberShare
             float saved = stof(display.getSelfDrive()) - stof(display.getShareUber());
             cout << " =        $" << saved << "\n";

    }

    return os;
}

/******************2.16 END ***************************************/