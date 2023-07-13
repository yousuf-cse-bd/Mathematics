/**
 * @file SortedThreeNumbers1.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sorting three numbers using only if conditions
 * @version: 0.1
 * @date 2023-07-12
 * @since WednesDay; 11:03 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

void displaySortedThreeNumbers(double &num1, double &num2, double &num3){
	if(num1 > num2){
		swap(num1, num2);
	}
	if(num1 > num3){
		swap(num1, num3);
	}
	if(num2 > num3){
		swap(num2, num3);
	}
}

int main(int argc, const char *const argv[]){
    /* code */
	double num1 {3};
	double num2 {2};
	double num3 {1};
	displaySortedThreeNumbers(num1, num2, num3);
	
	cout<<num1<<" < "<<num2<<" < "<<num3<<endl;
	
    return 0;
}
