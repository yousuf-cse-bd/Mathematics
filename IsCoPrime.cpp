/**
 * @file IsCoPrime.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find co-prime natural numbers using ternary operator
 * @version 0.1
 * @date 2023-01-25
 * @since WednesDay; 12:27 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <algorithm>
using namespace std;

bool isCoPrime(const size_t &number1, const size_t number2){
    // if(__gcd(number1, number2) == 1){
    //     return true;
    // }
    // else{
    //     return false;
    // }
    return ((__gcd(number1, number2) == 1)?true:false);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    size_t number1 {15}, number2 {5};
    cout<<"Enter number1 here: ";
    cin>>number1;
    cout<<"Enter number2 here: ";
    cin>>number2;
    cout<<number1 <<" and "<<number2 <<" are "<<(isCoPrime(number1, number2)?"Co-Prime":"Not-Co-Prime")<<endl;
    system("pause>0");
    return 0;
}
