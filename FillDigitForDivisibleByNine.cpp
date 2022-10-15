/**
 * @file FillDigitForDivisibleByNine.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find missing digit from a number, with filled the digit then divisible by nine
 * @version 0.1
 * @date 2022-10-15
 * @since SaturDay; 10:31 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class FillDigitForDivisibleByNine
{
private:
    string decimalNumberString;
    unsigned long long int decimalNumber;
    unsigned int sumOfDigits;
    // bool isLenght18(void){
    //     if(decimalNumberString.size() <= 18){
    //         decimalNumber = stoull(decimalNumberString);
    //         return true;
    //     }else{
    //         return false;
    //     }
    // }
public:
    FillDigitForDivisibleByNine(string decimalNumberString){
        this->decimalNumberString = decimalNumberString;
        sumOfDigits = 0;
        sumOfDigitsFromString();
    }
    void sumOfDigitsFromString(void){
        for(register unsigned int i = 0; i < decimalNumberString.length(); i++){
            sumOfDigits += (unsigned short int)(decimalNumberString[i] - '0');
        }
    }
    void findMissingDigit(unsigned int modulus){
        for(register unsigned int missingDigit = 0 ; missingDigit <= 9; missingDigit++){
            if((missingDigit + sumOfDigits) % modulus == 0){
                cout<<"Missing Digit: "<<missingDigit<<endl;
                break;
            }
        }
    }
    ~FillDigitForDivisibleByNine(){
        cout<<"\t\tThanks..."<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string decimalNumberString = "54723";
    cout<<"Enter a Number Here: ";
    cin>>decimalNumberString;
    FillDigitForDivisibleByNine nine = FillDigitForDivisibleByNine(decimalNumberString);
    nine.findMissingDigit(9);
    return 0;
}

