/**
 * @file ProductThreeNaturalNumberDivBySix.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Product of three consecutive numbers will alwayas be divisible by six (6)
 * @version 0.1
 * @date 2023-01-27
 * @since FriDay; 11:38 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    constexpr unsigned limitForThree{3};
    size_t initialSequence {1};
    size_t productResult {1};

    cout<<"Enter initial number here: ";
    cin>>initialSequence;

    cout<<"There are three number sequencely: ";
    for(unsigned int i {0}; i < limitForThree; i++){
        cout<<initialSequence<<" ";
        productResult *= initialSequence++;
    }
    cout<<endl;
    size_t divisor {6};
    if(productResult % divisor == 0){
        size_t divResult {(productResult / divisor)};
        cout<<productResult<<" is divisor by "<<divisor<<" div-result: "<<divResult<<endl;
        cout<<divisor<<" x "<<divResult<<" = "<<productResult<<endl;
    }
    else{
        cout<<productResult<<" is NOT divisor by "<<divisor<<endl;
    }

    return 0;
}
