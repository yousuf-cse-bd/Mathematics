/**
 * @file FindBigDivisorGivenMod4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find greatest number which divides 100 & 184 with the remainder 4 in every time
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
    void bigDivisor(unsigned int number1, unsigned int number2, const unsigned int fixedRemainder){
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
    void bigDivisor(unsigned int number1, unsigned int number2){
        unsigned int bigNumber, bigDivisor;
        if(number1 < number2){
            bigNumber = number2;
        }else{
            bigNumber = number1;
        }
        for(unsigned int i = 1; i <= bigNumber; i++){
            if((number1 % i == 4) && (number2 % i == 4)){
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
    divisor.bigDivisor(100, 184);
    divisor.bigDivisor(100, 184, 4);
    return 0;
}
