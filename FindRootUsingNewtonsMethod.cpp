/**
 * @file FindRootUsingNewtonsMethod.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find root of a number using Newton’s method
 * @version: 0.1
 * @date 2023-07-11
 * @since TuesDay; 11:03 PM
 * @copyright Copyright (c) 2023
 * @timecomplexity: O(log N)
 * @spacecomplexity: O(1)
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;
/*Recursion function is suport default parameter*/
double squareRoot(const double &number, const double &lastGuess, const double &tolerance = 0.00001){
	
	const double nextGuess {(lastGuess + (number/lastGuess))/2.0};
	if(abs(nextGuess - lastGuess) <= tolerance){
		return nextGuess;
	}
	else{
		return squareRoot(number, nextGuess, tolerance);
	}
}

int main(int argc, const char *const argv[]){
    /* code */
	double number{0.0};
	do{
		cout<<"Enter a number here: ";
		cin>>number;
	}while(number <= 1); /*Not negative number*/
	
	double lastGuess{number/2};
	cout<<number<<" -> Sqaure root : "<<squareRoot(number, lastGuess)<<endl;
    
	cout<<"\t\tHappy Ending..."<<endl;
	
    return 0;
}
