/**
 * @file AreaOfTriangle.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculate area of triangle, a = (base*height)/2
 * @version 0.1
 * @date 2022-10-16
 * @since SunDay; 04:19 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    float base, height;
    cout<<"Enter base value of triangle: ";
    cin>>base;
    cout<<"Enter height value of triangle: ";
    cin>>height;

    double area = 0.5*base*height;
    cout<<"Area of triangle: "<<area<<endl;
    return 0;
}
