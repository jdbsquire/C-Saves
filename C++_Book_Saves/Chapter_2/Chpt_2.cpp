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
             << "It will print the larger number followed by the string is larger\n"
             << "If the numbers are equal it will print equal.\n"
             << "               Compare Integers\n"
             << "Enter the first number: ";
             cin >> chpt2.num1;
             cout << "Enter the second number: ";
             cin >> chpt2.num2;
        cout << "\n";
        
    }else if (chpt2.newType == "Arth, Small to Largest"){
        
    }else if (chpt2.newType == "Circle"){
        
    }else if (chpt2.newType == "Shapes"){
        
    }else if (chpt2.newType == "Largest to Smallest"){
        //inside of istream
        
    }else if (chpt2.newType == "Odd or Even"){
        
    }else if (chpt2.newType == "Multiple Of"){
        
    }else if (chpt2.newType == "Checker Board"){
        
    }else if (chpt2.newType == "Char to Int"){
        
    }else if (chpt2.newType == "Parse the Integer"){
        
    }else if (chpt2.newType == "Squares and Cubes"){
        
    }else if (chpt2.newType == "BMI"){
        
    }else if (chpt2.newType == "Carpool"){
        
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
        

    } else if(display.newType == "Arth, Small to Largest"){

    } else if(display.newType == "Circle"){

    } else if(display.newType == "Shapes"){

    } else if(display.newType == "Largest to Smallest"){
        //inside of ostream
    } else if(display.newType == "Odd or Even"){

    } else if(display.newType == "Multiple Of"){

    } else if(display.newType == "Checker Board"){

    } else if(display.newType == "Char to Int"){

    } else if(display.newType == "Parse the Integer"){

    } else if(display.newType == "Squares and Cubes"){

    } else if(display.newType == "BMI"){

    } else if(display.newType == "Carpool"){

    }

    return os;
}

/******************2.16 END ***************************************/