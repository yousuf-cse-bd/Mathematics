/**
 * @file EvenOddFullSquared.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Distinguishes even or odd full squared numbers
 * @version 0.1
 * @date 2023-01-27
 * @since FriDay; 11:08 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    size_t limit {50};
    vector <size_t> evenSet{},oddSet{};
    for(size_t i{0}; i < limit; i++){
        if(i % 2 == 0){
            // cout<<"("<<i<<"x"<<i<<") = "<<(i*i)<<endl;
            evenSet.push_back(i*i);
        }else{
            oddSet.push_back(i*i);
        }
    }

    cout<<"Even full squared: ";
    for(const auto &even : evenSet){
        cout<<even<<" ";
    }
    cout<<"\n\nOdd full squared: ";
    for(const auto &odd : oddSet){
        cout<<odd<<" ";
    }
    cout<<endl;

    return 0;
}
