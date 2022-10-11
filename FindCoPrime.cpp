/**
 * @file FindCoPrime.cpp
 * @author  Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Checking co prime number or not
 * @version 0.1
 * @date 2022-10-11
 * @since TuesDay; 10:41 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int number1, number2;
    cout<<"Enter First Number Here: ";
    cin>>number1;
    cout<<"Enter Secnond Number Here: ";
    cin>>number2;
    if(__gcd(number1, number2) == 1){
        cout<<number1<<" & "<<number2<<" are ";
        cout<<"Co Prime Numbers."<<endl;
    }else{
        cout<<"\t"<<number1<<" & "<<number2<<" are ";
        cout<<"Not Co Prime...!"<<endl;
    }
    return 0;
}
