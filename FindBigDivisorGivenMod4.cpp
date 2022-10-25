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
using namespace std;
class FindBigDivisor{
private:
    unsigned int number1, number2, fixedRemainder;
public:
    FindBigDivisor(unsigned int number1, unsigned int number2, const unsigned int fixedRemainder){
        this->number1 = number1, this->number2 = number2, this->fixedRemainder = fixedRemainder;
    }
    /*Finding big divisor using GCD's concept*/
    void bigDivisorUsingGCD(void){
        unsigned int temp, num1, num2;
        num1 = number1 - fixedRemainder;
        num2 = number2 - fixedRemainder;
        /*Applying GCD divided system alogorithm*/
        while(num2 != 0){
            temp = num1 % num2;
            num1 = num2;
            num2 = temp;
        }
        cout<<"The big divisor: "<<num1<<endl;
    }
    void bigDivisorUsingIteration(void){
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
    unsigned int number1, number2, fixedRemainder;
    cout<<"\tEnter Number1: ";
    cin>>number1;
    cout<<"\tEnter Number2: ";
    cin>>number2;
    cout<<"\tEnter Fixed Remainder: ";
    cin>>fixedRemainder;
    FindBigDivisor divisor = FindBigDivisor(number1, number2, fixedRemainder);
    divisor.bigDivisorUsingGCD();
    divisor.bigDivisorUsingIteration();
    return 0;
}
