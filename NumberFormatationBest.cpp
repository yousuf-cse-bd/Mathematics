/**
 * @file NumberFormatationBest.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The best positive number formation with the international method
 * @version 0.1
 * @date 2022-11-05
 * @since SaturDay; 12:30 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const string unsignedLongLongInt = "446,744,073,709,551,615";
    unsigned long long int number = 446744073709551615;
    
    string strNumber = to_string(number);
    for(short int i = strNumber.size() - 3; i>0; i -= 3){
        strNumber.insert(strNumber.begin()+i, ',');
    }
    cout<<"The formation is done: "<<strNumber<<endl;
    (unsignedLongLongInt == strNumber)?cout<<"Equal.\n":cout<<"Not Equal."<<endl;
    return 0;
}
