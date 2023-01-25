/**
 * @file FullSqaureNumberUsingFormula2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief There are four serially natural numbers multipled and plus 1, so that will be a full square number
 * @version 0.1
 * @date 2023-01-26
 * @since WednesDay; 01:19 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

/*The formula: {(abcd) + 1}*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    constexpr unsigned int plusOne {1};
    constexpr unsigned int fourLimit {4};
    unsigned int firstPositiveNumber {1};

    cout<<"Enter first sequence number here: ";
    cin>>firstPositiveNumber;

    vector <unsigned int> sequenceNumbers(fourLimit);
    char ch {'a'};
    size_t mutlipleResult {1};
    for(unsigned int i = 0; i<fourLimit; i++){
        cout<<ch++<<" = "<<firstPositiveNumber<<endl;
        mutlipleResult *= firstPositiveNumber;
        sequenceNumbers.at(i) = firstPositiveNumber;
        firstPositiveNumber++;
    }
    mutlipleResult += plusOne;

    cout<<"Four serial natural numbers respectively: {(";
    for(unsigned int i {0}; i<fourLimit-1; i++){
        cout<<sequenceNumbers.at(i)<<" x ";
    }
    cout<<sequenceNumbers.at(fourLimit-1)<<") + "<<plusOne<<"} = "<<mutlipleResult<<endl;
    long double squareRoot {sqrtl(static_cast<long double> (mutlipleResult))};
    cout<<"The square root: "<<squareRoot<<" & its square: "<<(squareRoot * squareRoot)<<endl;

    return 0;
}
