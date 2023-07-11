/**
 * @file SquareRootApprox.js
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The custom square root method
 * @version: 0.1
 * @date 2023-07-11
 * @since TuesDay; 11:03 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

double squareRootApprox(const double &number){
	double lastGuess {1.0};
	double nextGuess {0.0};
	
	do{
		nextGuess = (lastGuess + (number/lastGuess))/2.0;
		if(abs(nextGuess - lastGuess) < 0.000001){
			return nextGuess; /*Optinal break;*/
		}
		lastGuess = nextGuess;
	}while(true);
//	return nextGuess; /*Optinal*/
}


int main(int argc, const char *const argv[]){
    /* code */
	for(int i{2}; i <= 15; i++){
		cout<<i<<" Square Root: "<<squareRootApprox(i)<<endl;
	}
    
	cout<<"Happy Ending..."<<endl;
	
    return 0;
}
