/**
 * @file SimpleInterest.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculate simple interest, (p*n*r)/100 formula
 * @version 0.1
 * @date 2022-10-16
 * @since SunDay; 04:38 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    float simpleInterest, p, n, r;
    cout<<"Enter p, n, r:"<<endl;
    cin>>p>>n>>r;
    simpleInterest = (p*n*r)/100;
    cout<<"The simple interest: "<<simpleInterest<<endl;
    return 0;
}
