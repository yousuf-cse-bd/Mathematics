/**
 * @file AreaChangeOfSquare.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find the increased hand in percentage from square area
 * @version 0.1
 * @date 2022-10-08
 * @since SaturDay; 10:00 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cmath>
using namespace std;
/*If the area of a square increases by 44%,
by what percentage does the length of each side increase?*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    float increasePercentage = 44; /*Given value %*/
    cout<<"Enter Increase Percentage[%] Here: ";
    cin>>increasePercentage;
    increasePercentage /= 100;
    float pastArea = 1;

    float presentIncraseArea = pastArea + increasePercentage;
    /*axa = a^2 = A*/
    presentIncraseArea = sqrt(presentIncraseArea);
    cout<<(presentIncraseArea - pastArea)*100<<" %"<<endl;
    return 0;
}
