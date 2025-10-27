#include "Chpt_2.h"

using namespace std;

Chpt_2::Chpt_2(){
    num1 = 0;
    num2 = 0;
    result = 0;
}

Chpt_2::Chpt_2(const int& Inum1, const int& Inum2){
    //Inum1=0;
    //Inum2=0;
}

float Chpt_2::getSum(){
    return result;
}

float Chpt_2::getProduct(){
    return result;
}

float Chpt_2::getDifference(){
    return result;
}

float Chpt_2::getQuotient(){
    return result;
}

//setters
void Chpt_2::setSum(const float& num1, const float& num2){

    result = num1 + num2;
}

void Chpt_2::setProduct(const float& num1, const float& num2){
    result = num1 * num2;
}

void Chpt_2::setDifference(const float& num1, const float& numn2){
    result = num1-num2;
}

void Chpt_2::setQuotient(const float& num1, const float& num2){
    result = num1/num2;
}

//Methods