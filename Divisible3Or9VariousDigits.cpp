/**
 * @file Divisible3Or9VariousDigits.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find divisible number various digits
 * @version 0.1
 * @date 2022-10-13
 * @since ThursDay; 04:49 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class DivisibleNumber{
private:
    unsigned long long int decimalNumber;
    unsigned int sumOfDigits;
public:
    DivisibleNumber(){}
    void setDecimalNumber(unsigned long long int decimalNumber){
        this->decimalNumber = decimalNumber;
        sumOfDigits = 0;
    }
    bool isDivisibleBy3(void){
        unsigned long long int number = decimalNumber;
        unsigned short int decimalDigit;
        while(number != 0){
            decimalDigit = number % 10;
            sumOfDigits += decimalDigit;
            number /= 10;
        }
        /*If sum pf digits divided by 3 therefore total number diveded by 3*/
        if(sumOfDigits % 3 == 0){
            return true;
        }else{
            return false;
        }
    }
    bool isDivisibleBy9(void){
        unsigned long long int number = decimalNumber;
        unsigned short int decimalDigit;
        while(number != 0){
            decimalDigit = number % 10;
            sumOfDigits += decimalDigit;
            number /= 10;
        }
        /*If sum pf digits divided by 9 therefore total number diveded by 9*/
        if(sumOfDigits % 9 == 0){
            return true;
        }else{
            return false;
        }
    }
    ~DivisibleNumber(){}
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    DivisibleNumber isDivisible = DivisibleNumber();
    unsigned int lowerLimit3 = 100, uppperLimit3 = 999;
    for(unsigned int decimalNumber = lowerLimit3; decimalNumber <= uppperLimit3; decimalNumber++){
        isDivisible.setDecimalNumber(decimalNumber);
        if(isDivisible.isDivisibleBy9()){
            cout<<decimalNumber<<" ";
        }
    }
    return 0;
}
