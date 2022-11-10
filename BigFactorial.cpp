/**
 * @file BigFactorial.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculate big factorial using dynamic array
 * @version 0.1
 * @date 2022-11-10
 * @since ThursDay; 12:20 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <class DataType>
class BigFactorial{
private:
    DataType number;
    DataType *factorial;
public:
    BigFactorial(DataType number){
        this->number = number;
        factorial = (DataType*) malloc(sizeof(DataType));
    }
    void calculateFactorial(void){
        *factorial = 1; /*First index is 1*/
        DataType size = 1; /*New size of the array*/
        for(DataType x = 2; x <= number; x++){
            size = multiply(x, size);
        }
        cout<<number<<"! Factorial: ";
        for(long long int i = size - 1; i >= 0 ; i--){
            cout<<*(factorial+i);
        }
        cout<<endl;
    }
    DataType multiply(DataType x, DataType size){
        DataType carry = 0; /*Initialize by zero*/
        DataType product;
        for(DataType i = 0; i != size; i++){
            product = *(factorial + i)*x + carry;
            *(factorial + i) = product % 10; /*Store the last digit, LSD to in the array(factorial)*/
            carry = product / 10; /*Store the MSB or rest value to carry*/
        }
        /*Put the carray again left side to in the factorial*/
        while(carry != 0){
            *(factorial + size) = carry % 10;
            carry /= 10;
            size++;
        }
        return size;
    }
    ~BigFactorial(){
        free(factorial);
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int number;
    cout<<"Enter the positive number here: ";
    cin>>number;
    /*To make absolute value*/
    number = (number > 0)? number : number*(-1);
    
    BigFactorial <unsigned short int> factorial(number);
    factorial.calculateFactorial();
    system("pause>0");
    return 0;
}



