/**
 * @file SquareAndCube.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculate square and cube values from a value
 * @version 0.1
 * @date 2022-10-16
 * @since SunDay; 04:24 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    short int n;
    long long int sqaure, cube;
    cout<<"Enter n number here: ";
    cin>>n;
    sqaure = (n)*(n);
    cout<<"The square value: "<<sqaure<<endl;
    cube = (sqaure)*(n);
    cout<<"The cueb value: "<<cube<<endl;
    return 0;
}
