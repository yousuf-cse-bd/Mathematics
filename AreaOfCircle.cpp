/**
 * @file AreaOfCircle.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculate area of circle, a = pi*r^2
 * @version 0.1
 * @date 2022-10-16
 * @since SunDay; 11:39 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    double area;
    float r, pi = acos(-1);
    cout<<"Enter Radius Value Here: ";
    cin>>r;
    area = pi*r*r;
    cout<<"Area of Circle: "<<area<<endl;
    return 0;
}
