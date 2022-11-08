/**
 * @file EfficientLCM_GCD.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find GCD/HCF and GCD using recursion method
 * @version 0.1
 * @date 2022-11-08
 * @since TuesDay; 10:45 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

unsigned long long int lcmRecursion(unsigned long long int number1, unsigned long long int number2, unsigned long long int lcmMaxValue){
    if((lcmMaxValue % number1 == 0) && (lcmMaxValue % number2 == 0)){
        return lcmMaxValue;
    }else{
        return (lcmRecursion(number1, number2, ++lcmMaxValue));
    }
}
unsigned long long int gcdRecursion(unsigned long long int number1, unsigned long long int number2){
    if(number2 == 0){
        return number1;
    }else{
        return (gcdRecursion(number2, number1 % number2));
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned long long int number1, number2, lcmMaxValue;
    cout<<"Enter first number here: ";
    cin>>number1;
    cout<<"Enter second number here: ";
    cin>>number2;

    cout<<"\tLeast Common Multiple, LCM: "<<lcmRecursion(number1, number2, max(number1, number2))<<endl;
    cout<<"\tGreates Commin Divisor, GCD: "<<gcdRecursion(number1, number2)<<endl;
    return 0;
}
