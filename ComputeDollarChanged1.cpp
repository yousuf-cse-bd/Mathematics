/**
 * @file ComputeDollarChanged1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Money $ change computed | C++ programming example
 * @version 0.1
 * @date 2023-06-22 
 * @since ThursDay; 11:146 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
 
#include <iostream>
#pragma pack(1)
using namespace std;

string beforeDigits(const string &amount, const char &ch){
	if(ch != '.'){
		cerr<<"\tOperation faild1..!"<<endl;
		exit(0);
	}
	string leftDigits{};
	int i{0};
	while(amount.at(i) != ch){
		leftDigits += amount.at(i);
		++i;
	}
	
	return leftDigits;
}

string afterPointed(const string &amount, const char &ch){
	
	if(ch != '.'){
		cerr<<"\tOperation faild2..!"<<endl;
		exit(0);
	}
	const int len{static_cast<int>(amount.length())};
	
	string rightDigits{""};
	for(int i{0}; i < len; i++){
		if(amount.at(i) == ch){
			rightDigits += amount.at(i+1);
			rightDigits += amount.at(i+2);
		}
	}
	return rightDigits;
}

int main(int argc, const char *const argv[]){
    /* code */
    system("cls");
	
	double userAmount {11.567};
	cout<<"Enter your amount here?: ";
	cin>>userAmount;
	
	string amount{to_string(userAmount)};

	const string leftDigits{beforeDigits(amount, '.')};
	const string rightDigits{afterPointed(amount, '.')};
	
	amount = leftDigits + rightDigits;
	
	ssize_t remainingAmount {stoll(amount)};
	
	/*Find number of 1 dollars*/
	ssize_t numberOfDollars {remainingAmount / 100};
	
	remainingAmount %= 100;
	
	/*Find number of quarters in the remaining amount*/
	ssize_t quarters {remainingAmount / 25};
	remainingAmount %= 25;
	
	/*Find the number of dimes in the remaining amount*/
	ssize_t dimes{remainingAmount / 10};
	remainingAmount %= 10;
	
	/*Find the number of nickel in the remaining amount*/
	ssize_t nickels {remainingAmount / 5};
	remainingAmount %= 5;

	/*Find the number of pennies in the remaining amount*/
	ssize_t pennies {remainingAmount};
	
	/*Display the results*/
	cout<<"Your amount: "<<userAmount<<" , consists of:\n";
	cout<<numberOfDollars<<(numberOfDollars > 1 ? " Dollars":" Dollar")<<endl;
	cout<<quarters<<(quarters > 1 ? " Quarters":" Quarter")<<endl;
	cout<<dimes<<(dimes > 1 ? " Dimes":" Dime")<<endl;
	cout<<nickels<<(nickels > 1 ? " Nickels":" Nickel")<<endl;
	cout<<pennies<<(pennies > 1 ? " Pennies":" Pennies")<<endl;
	
	system("pause>0");
    return 0;
}

