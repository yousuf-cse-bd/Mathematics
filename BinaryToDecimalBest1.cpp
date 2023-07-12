/**
 * @file FindRootUsingNewtonsMethod.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Binary to decimal, left shift operation still best one
 * @version: 0.1
 * @date 2023-07-12
 * @since WednesDay; 11:03 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#pragma pack(1)
using namespace std;

size_t binaryToDecimal1(const string &binaryNumber){
	ssize_t decimalNumber {0};
	ssize_t binaryBase {1}; /*pow(2, 0)*/
	const ssize_t len{static_cast<ssize_t>(binaryNumber.size())};
	for(ssize_t i = len - 1; i >= 0; i--){
		if(binaryNumber.at(i) == '1'){
			decimalNumber += binaryBase;
		}
		binaryBase <<= 1; /*Base *= 2*/ /*1 + 2 + 4 + 8 + 16 + 32 + 64*/
	}
	return decimalNumber;
}

size_t binaryToDecimal1(const ssize_t &binaryNumber){
	return binaryToDecimal1(to_string(binaryNumber));
}

int main(int argc, const char *const argv[]){
    /* code */
	
    cout<<binaryToDecimal1("0001111")<<endl;
	cout<<binaryToDecimal1(1111)<<endl;
	cout<<"\t\tHappy Ending..."<<endl;
	
    return 0;
}
