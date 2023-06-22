/**
 * @file PalindromeIn5Digits1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Palindrom with permutation numbers
 * @version 0.1
 * @date 2023-06-22 
 * @since ThursDay; 11:56 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <algorithm>
#pragma pack(1)
using namespace std;

bool isPalindrome(const string &word){
    string palindrome {word};
    reverse(palindrome.begin(), palindrome.end());

    return palindrome == word;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string word = "1234321";

    while(next_permutation(word.begin(), word.end())){
        if(isPalindrome(word)){
            cout<<word<<" this word is palindrom."<<endl;
        }
    }

    return 0;

}
