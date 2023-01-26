/**
 * @file FullSquareSeries.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A simple full square series using for-loop
 * @version 0.1
 * @date 2023-01-26
 * @since ThursDay; 09:38 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int count {10};
    for(unsigned int i {0}; i < count; i++){
        cout<<i<<"^2 = "<<(i*i)<<endl;
    }
    return 0;
}
