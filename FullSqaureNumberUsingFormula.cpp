/**
 * @file FullSqaureNumberUsingFormula.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief There are four serially natural numbers multipled and plus 1, so that will be a full square number
 * @version 0.1
 * @date 2023-01-25
 * @since WednesDay; 11:38 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cmath>
using namespace std;

/* The formula: (x^2 + 3x + 1)^2*/

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    constexpr unsigned int fourLimit {4};
    unsigned int firstPositiveNumber {1};

    cout<<"Enter first positive number here: ";
    cin>>firstPositiveNumber;

    const size_t multResult {(firstPositiveNumber*firstPositiveNumber) + (3*firstPositiveNumber) + 1};
    const size_t fullSquare {multResult * multResult};

    cout<<"Four serial natural numbers respectively: {(";
    for(unsigned int i{0}; i<fourLimit-1; i++){
        cout<<firstPositiveNumber++<<" x ";
    }
    cout<<firstPositiveNumber<<") + 1} = "<<fullSquare<<endl;
    long double squareRoot {sqrtl(static_cast<long double> (fullSquare))};
    cout<<"and its square root: "<<squareRoot<<" also full sqaure: "<<(squareRoot * squareRoot)<<endl; 
    
    return 0;
}
