/**
 * @file BigNumberPower.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Big number power calculation
 * @version 0.1
 * @date 2022-11-14
 * @since MonDay; 09:58 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class IPv6Calculation{
private:
    unsigned short int *result;
    unsigned short int base;
    unsigned short int power;
    unsigned short int multiply(unsigned short int size){
        unsigned short int product, carry = 0;
        for(unsigned short int i = 0; i < size; i++){
            product = (*(result + i)) * base + carry;
            *(result + i) = product % 10; /*Store the LSD into the array*/
            carry = product / 10; /*Store the MSD update to carry*/
        }
        while(carry != 0){
            *(result + size) = carry % 10;
            carry /= 10;
            ++size;
        }
        return size;
    }
public:
    IPv6Calculation(){
        cout<<"\tEnter the base value here: ";
        cin>>base;
        cout<<"\tEnter the power value here: ";
        cin>>power; 
        result = (unsigned short int*) malloc(sizeof(unsigned short int));
    }
    
    void caluculation(void){
        *result = 1; /*First index initialilze by 1*/
        unsigned short int size = 1;
        for(unsigned short int x = 1; x <= power; x++){
            size = multiply(size); /*Just size update*/
        }
        cout<<base<<'^'<<power<<" = ";
        for(int i = size - 1; i >= 0; i--){
            cout<<*(result + i);
        }
        cout<<endl;
    }
    
    ~IPv6Calculation(){
        free(result);
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    IPv6Calculation ipV6;
    ipV6.caluculation();
    return 0;
}
