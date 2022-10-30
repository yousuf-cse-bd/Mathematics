/**
 * @file FractionEquality.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Fraction equality check
 * @version 0.1
 * @date 2022-10-30
 * @since SunDay; 12:08 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

template <class DataType>
void fractionEquality(DataType subtract1, DataType divisor1,DataType subtract2, DataType divisor2){
    DataType number1, number2;
    number1 = subtract1 * divisor2;
    number2 = subtract2 * divisor1;

    if(number1 == number2){
        cout<<"The both fraction is equal."<<endl;
    }else if(number1 > number2){
        cout<<"The first fraction is greater than second fraction."<<endl;
    }else{
        cout<<"The first fraction is less than second fraction."<<endl;
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    fractionEquality(5,7,15, 21);
    fractionEquality(4, 5, 3, 7);
    return 0;
}
