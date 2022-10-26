/**
 * @file 1_PiyalsAge.cpp
 * @author your name (you@domain.com)
 * @brief gonitzoggo 1
 * @version 0.1
 * @date 2022-10-26
 * @since WednesDay; 11:10 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Piyal and his 5 brothers ages are*/
    int ages[6] = {3, 5, 7, 9,11 ,13};
    /*stayed piyal and his brother at home  who is age 5*/
    int piyalsWith, sumOfAgeIn16[3], belowAge10[3], pyalsAge;
    int i, j = 0, k = 0;
    int sum = 0;
    for(i = 0; i<6; i++){
        if(*(ages+i) == 5){
            piyalsWith = *(ages+i);
        }
        if(*(ages+i) < 10 && *(ages+i) > 5){
            *(belowAge10+j) = *(ages+i);
            j++;
        }
        if(*(ages + i) > 10 || *(ages+i) < 5){
            *(sumOfAgeIn16+k) = *(ages + i);
            k++;
        }
    }

    cout<<"Piyals within bro: "<<piyalsWith<<endl;
    cout<<"Under Below 10: ";
    for(i = 0; i<j; i++){
       cout<<*(belowAge10+i)<<" ";
    }
    cout<<"\nSum of 16: ";
    for(i = 0; i<k-1; i++){
        for(j = 0; j<k-i; j++){
            if(sumOfAgeIn16[j] + sumOfAgeIn16[j+1] == 16){
                cout<<sumOfAgeIn16[j]<<"+"<<sumOfAgeIn16[j+1]<<endl;
                break;
            }
        }
    }
    cout<<"Piyal's Age: "<<sumOfAgeIn16[1]<<endl;
    return 0;
}
