/**
 * @file IsDivisible.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Check divisible positive number by (2,3,4,5,6,9)
 * @version 0.1
 * @date 2022-10-13
 * @since ThursDay; 11:49 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class IsDivisible
{
private:
    unsigned long long int decimalNumber;
    unsigned short int fistDigit;
    unsigned int sumOfDigits;
public:
    IsDivisible(unsigned long long int decimalNumber){
        this->decimalNumber = decimalNumber;
        sumOfDigits = 0;
    }
    bool isDivisibleBy2(void){
        unsigned short int decimalDigit;
        decimalDigit = decimalNumber % 10;
        /*If LSD (ekok == ones) is even digit then total number is divisible by 2*/
        if(decimalDigit % 2 == 0){
            return true;
        }else{
            return false;
        }
    }
    bool isDivisibleBy3(void){
        unsigned short int decimalDigit;
        unsigned long long int number = decimalNumber;
        while(number !=0 ){
            decimalDigit = number % 10;
            sumOfDigits += decimalDigit;
            number /= 10;
        }
        /*If sum of digits is divisible by 3, therefore total number is divisible by 3*/
        if(sumOfDigits % 3 == 0){
            return true;
        }else{
            return false;
        }
    }
    bool isDivisibleBy4(void){
        unsigned long long int number = decimalNumber;
        unsigned short int ones = number % 10; /*Ekok*/
        number /= 10;
        unsigned short int tens = number % 10; /*Doshok*/
        
        char twoDigits[3] = {(char)(tens+'0'), (char)(ones+'0'), '\0'};
        // cout<<twoDigits<<endl;
        int twoDigitsNumber = stoi(twoDigits);
        // cout<<"The number: "<<twoDigitsNumber<<endl;
        /*Right two digits number is divisible by 4 hence total number divisible*/
        if(twoDigitsNumber % 4 == 0 || ones == 0 && tens == 0){
            return true;
        }else{
            return false;
        }
    }
    bool isDivisibleBy5(void){
        unsigned short int onesDigit = decimalNumber % 10;
        if(onesDigit == 0 || onesDigit == 5){
            return true;
        }else{
            return false;
        }
    }
    bool isDivisibleBy6(void){
        /*If divisible by 2 and 3 then divisible by 6 */
        if(isDivisibleBy2() && isDivisibleBy3()){
            return true;
        }else{
            return false;
        }
    }
    bool isDivisibleBy9(void){
        unsigned short int decimalDigit;
        unsigned long long int number = decimalNumber;
        while(number !=0 ){
            decimalDigit = number % 10;
            sumOfDigits += decimalDigit;
            number /= 10;
        }
        /*If sum of digits is divisible by 9, therefore total number is divisible by 9*/
        if(sumOfDigits % 9 == 0){
            return true;
        }else{
            return false;
        }
    }
    ~IsDivisible(){
        cout<<"\t\tDestructor..."<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned long long int decimalNumber;
    cout<<"Enter Decimal Number Here: ";
    cin>>decimalNumber;
    IsDivisible isDivisible = IsDivisible(decimalNumber);
    if(isDivisible.isDivisibleBy2()){
        cout<<"\tThe "<<decimalNumber<<" is divisible by TWO '2' ."<<endl;
    }else{
        cout<<"\tThe "<<decimalNumber<<" NOT is divisible by TWO '2' ."<<endl;
    }

    if(isDivisible.isDivisibleBy3()){
        cout<<"\tThe "<<decimalNumber<<" is divisible by THREE '3' ."<<endl;
    }else{
        cout<<"\tThe "<<decimalNumber<<" NOT is divisible by THREE '3' ."<<endl;
    }

    if(isDivisible.isDivisibleBy4()){
        cout<<"\tThe "<<decimalNumber<<" is divisible by FOUR '4' ."<<endl;
    }else{
        cout<<"\tThe "<<decimalNumber<<" NOT is divisible by FOUR '4' ."<<endl;
    }

    if(isDivisible.isDivisibleBy5()){
        cout<<"\tThe "<<decimalNumber<<" is divisible by FIVE '5' ."<<endl;
    }else{
        cout<<"\tThe "<<decimalNumber<<" NOT is divisible by FIVE '5' ."<<endl;
    }

    if(isDivisible.isDivisibleBy6()){
        cout<<"\tThe "<<decimalNumber<<" is divisible by SIX '6' ."<<endl;
    }else{
        cout<<"\tThe "<<decimalNumber<<" NOT is divisible by SIX '6' ."<<endl;
    }

    if(isDivisible.isDivisibleBy9()){
        cout<<"\tThe "<<decimalNumber<<" is divisible by SIX '9' ."<<endl;
    }else{
        cout<<"\tThe "<<decimalNumber<<" NOT is divisible by SIX '9' ."<<endl;
    }

    
    return 0;
}
