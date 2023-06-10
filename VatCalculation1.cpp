/**
 * @file VatCalculatoin1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple vat calculation | C++ Programming Example
 * @version 0.1
 * @date 2022-06-10
 * @since SaturDay; 05:37 PM
 * @copyright Copyright (c) 2022
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#pragma pack(1)
using namespace std;

string vatCalculation(const double &bill){
	
	double vatTwentyPercent{0.20};
	double vatFifteenPercent{0.15};
	double vat{0.0};
	
	int billThreshold1{1500};
	int billThreshold2{500};
	
	if(bill >= billThreshold1){
		vat = bill * vatTwentyPercent;
	}
	else if(bill >= billThreshold2){
		vat = bill * vatFifteenPercent;
	}
	else{
		return "Your bill is out of cost.";
	}
	
	return "Your vat: "+to_string(vat);
}

int main(int argc, const char *const argv[]){
    /* code */
    system("cls");
	cout<<vatCalculation(1500)<<endl;
    return 0;
}
