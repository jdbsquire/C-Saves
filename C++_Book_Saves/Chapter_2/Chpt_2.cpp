#include "Chpt_2.h"

using namespace std;

Chpt_2::Chpt_2(){
    num1 = 0;
    num2 = 0;
    result = 0;
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

//Methods 
//One method in main to gather all the values
//computations performed inside the class
void Chpt_2::captureValues(const float& val1, const float& val2){
    Chpt_2::setSum(val1, val2);
    Chpt_2::setProduct(val1, val2);
    Chpt_2::setDifference(val1, val2);
    Chpt_2::setQuotient(val1, val2);
}