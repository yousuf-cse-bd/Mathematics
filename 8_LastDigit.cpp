/**
 * @file 8_LastDigit.cpp
 * @author your name (you@domain.com)
 * @brief gonitzoggo 8
 * @version 0.1
 * @date 2022-10-26
 * @since WednesDay; 11:10 
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

unsigned long long int powerFunction(unsigned int base,unsigned int power){
    unsigned long long int result = 1;
    for(register unsigned short int i = 1; i<=power; i++){
        result *= base;
    }
    return result;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned long long int mult;
    unsigned int power = 1971, base = 7;
    mult = powerFunction(base, power);
    cout<<mult<<endl;
    unsigned int sum = 0;
    while(mult !=0 ){
        unsigned short int decimalDigit = mult % 10;
        sum += decimalDigit;
        mult /= 10;
    }
    cout<<"Sum of them: "<<sum<<endl;

    // cout<<"Start: ";
    // unsigned long long int a, b;
    // for(unsigned int i = 1, j = 1000; i<=1000; i++, j--){
    //     a = powerFunction(i, 2);
    //     b = powerFunction(j, 3);
    //     if(a == b){
    //         cout<<a<<endl;
    //         cout<<b<<endl;
    //         break;
    //     }
    // }
    // cout<<"End"<<endl;
    return 0;
}
