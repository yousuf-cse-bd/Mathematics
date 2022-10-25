/**
 * @file FindBigDivisor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find the greatest number (divisor) which divided n1, n2, n3 with remainder r1, r2, 4 respectively
 * @version 0.1
 * @date 2022-10-25
 * @since TuesDay; 09:24 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <algorithm>
#pragma pack(1)
using namespace std;
class FindBigDivisor{
private:
    unsigned int number1, number2, number3, fixedRemainder1, fixedRemainder2, fixedRemainder3;
public:
    FindBigDivisor(unsigned int number1, unsigned int number2, unsigned int number3, const unsigned int fixedRemainder1, const unsigned int fixedRemainder2, const unsigned int fixedRemainder3){
        this->number1 = number1, this->number2 = number2, this->number3 = number3;
        this->fixedRemainder1 = fixedRemainder1, this->fixedRemainder2 = fixedRemainder2, this->fixedRemainder2 = fixedRemainder2, this->fixedRemainder3 = fixedRemainder3;
    }
    /*Finding big divisor using GCD's concept*/
    void bigDivisorUsingGCD(void){
        unsigned int temp, bigDivisor, num1, num2, num3;
        num1 = number1 - fixedRemainder1;
        num2 = number2 - fixedRemainder2;
        num3 = number3 - fixedRemainder3;
        /*Applying GCD divided system alogorithm*/
        bigDivisor = __gcd(num1,__gcd(num2, num3));
        cout<<"The big divisor: "<<bigDivisor<<endl;
    }
    void bigDivisorUsingIteration(void){
        unsigned int bigNumber, bigDivisor;
        bigNumber = max(number1, max(number2, number3));
        for(unsigned int i = 1; i <= bigNumber; i++){
            if((number1 % i == fixedRemainder1) && (number2 % i == fixedRemainder2) && (number3 % i == fixedRemainder3)){
                bigDivisor = i;
            }
        }
        cout<<"The big divisor: "<<bigDivisor<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int number1, number2, number3, fixedRemainder1, fixedRemainder2, fixedRemainder3;
    cout<<"\tEnter Number1: ";
    cin>>number1;
    cout<<"\tEnter Number2: ";
    cin>>number2;
    cout<<"\tEnter Number3: ";
    cin>>number3;
    cout<<"\tEnter Fixed Remainder1: ";
    cin>>fixedRemainder1;
    cout<<"\tEnter Fixed Remainder2: ";
    cin>>fixedRemainder2;
    cout<<"\tEnter Fixed Remainder3: ";
    cin>>fixedRemainder3;
    FindBigDivisor divisor = FindBigDivisor(number1, number2, number3, fixedRemainder1, fixedRemainder2, fixedRemainder3);
    divisor.bigDivisorUsingGCD();
    divisor.bigDivisorUsingIteration();
    return 0;
}