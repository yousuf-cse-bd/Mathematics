/**
 * @file GreatestSmallestNumberFromCertainDigits.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Consturct greatest and smallest number from given digits
 * @version 0.1
 * @date 2022-10-10
 * @since MonDay; 05:30 PM 
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

bool constructGreatestNumber(char a, char b){
    return (a < b);
}
bool constructSmallestNumber(char a, char b){
    return (a > b);
}
/*Function pointer is used to here wrapping function*/
void bubbleSort(char *digts, const int size, bool(*compare)(char, char)){
    bool swapStatus = true;
    for(unsigned int i = 1; i < size && swapStatus == true; i++){
        swapStatus = false;
        for(unsigned int j = 0; j < size - i; j++){
            if(compare(*(digts+j), *(digts+j+1))){
                swap(*(digts+j), *(digts+j+1));
                swapStatus = true;
            }
        }
    }
}
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const int size = 7;
    char digits[7+1] = {'4','0','5','3','9','8','7','\0'};
    cout<<"Given Digits: ";
    for(char x: digits){
        cout<<x<<' ';
    }
    cout<<endl;
    bubbleSort(digits, size, constructGreatestNumber);
    cout<<"Greatest Number: "<<digits<<endl;
    bubbleSort(digits, size, constructSmallestNumber);
    
    if(*(digits) == '0'){
        swap(*(digits), *(digits+1));
    }
    cout<<"Smallest Number: "<<digits<<endl;
    return 0;
}
