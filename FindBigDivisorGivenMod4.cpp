/**
 * @file FindBigDivisorGivenMod4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find greatest number (divisor) which divides number1 & number2 with the remainder a constant number in every time
 * @version 0.1
 * @date 2022-10-25
 * @since TuesDay; 11:12 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <algorithm>
using namespace std;
class FindBigDivisor{
public:
    /*Finding big divisor using GCD's concept*/
    void bigDivisorUsingGCD(unsigned int number1, unsigned int number2, const unsigned int fixedRemainder){
        number1 = number1 - fixedRemainder;
        number2 = number2 - fixedRemainder;
        unsigned int temp;
        /*Applying GCD divided system alogorithm*/
        while(number2 != 0){
            temp = number1 % number2;
            number1 = number2;
            number2 = temp;
        }
        cout<<"The big divisor: "<<number1<<endl;
    }
    void bigDivisorUsingIteration(unsigned int number1, unsigned int number2, const unsigned int fixedRemainder){
        unsigned int bigNumber, bigDivisor;
        if(number1 < number2){
            bigNumber = number2;
        }else{
            bigNumber = number1;
        }
        for(unsigned int i = 1; i <= bigNumber; i++){
            if((number1 % i == fixedRemainder) && (number2 % i == fixedRemainder)){
                bigDivisor = i;
            }
        }
        cout<<"The big divisor: "<<bigDivisor<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    FindBigDivisor divisor;
    unsigned int number1, number2, fixedRemainder;
    cout<<"\tEnter Number1: ";
    cin>>number1;
    cout<<"\tEnter Number2: ";
    cin>>number2;
    cout<<"\tEnter Fixed Remainder: ";
    cin>>fixedRemainder;
    divisor.bigDivisorUsingGCD(number1, number2, fixedRemainder);
    divisor.bigDivisorUsingIteration(number1, number2, fixedRemainder);
    return 0;
}
