/**
 * @file FullSqaureNumber.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief There are four serially natural numbers multipled and plus 1, so that will be a full square number
 * @version 0.1
 * @date 2023-01-25
 * @since WednesDay; 11:20 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    constexpr unsigned int plusOne {1};
    constexpr unsigned int fourLimit {4};
    unsigned int firstPositiveNumberX {1};

    cout<<"Enter first positive number here: ";
    cin>>firstPositiveNumberX;

    vector <unsigned int> serialPositiveNumber (fourLimit);

    size_t multResult {1};
    
    for(unsigned int i{0}; i<fourLimit; i++){
        serialPositiveNumber.at(i) = firstPositiveNumberX++;
        multResult *= serialPositiveNumber.at(i);
    }

    cout<<"Four serial natural numbers respectively: (";
    for(unsigned int i {0}; i<fourLimit-1; i++){
        cout<<serialPositiveNumber.at(i)<<" x ";
    }
    cout<<serialPositiveNumber.at(fourLimit-1)<<") + "<<plusOne<<endl;

    multResult += plusOne;
    cout<<"The full sqaure number: "<<multResult<<endl;

    double squareRoot {0.0};
    squareRoot = sqrt(static_cast <double> (multResult));
    cout<<"The sqaure root: "<<squareRoot<<" & its square: "<<(squareRoot * squareRoot)<<endl;
    return 0;
}
