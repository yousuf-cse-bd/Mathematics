/**
 * @file ThreeValuesSortBest.cpp
 * @author your name (you@domain.com)
 * @brief Three sorted values using if-else not logical operator
 * @version 0.1
 * @date 2022-10-16
 * @since SunDay; 10:32 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    if(a < b){
        if(b < c){
            cout<<"\t\tIf-if"<<endl;
            cout<<"Ascending Order: "<<a<<"<"<<b<<"<"<<c<<endl;
        }
        else if(a > c){
            cout<<"\t\tIf-elseIf"<<endl;
            cout<<"Ascending Order: "<<c<<"<"<<a<<"<"<<b<<endl;
        }else{
            cout<<"\t\tIf-if-else"<<endl;
            cout<<"Ascending Order: "<<a<<"<"<<c<<"<"<<b<<endl;
        }
    }else if(b < a){
        if(a < c){
            cout<<"\t\tElseIf-If"<<endl;
            cout<<"Ascending Order: "<<b<<"<"<<a<<"<"<<c<<endl;
        }else if(b < c){
            cout<<"\t\tElseIf-ElseIf"<<endl;
            cout<<"Ascending Order: "<<b<<"<"<<c<<"<"<<a<<endl;
        }else{
            cout<<"\t\tElseIf-else"<<endl;
            cout<<"Ascending Order: "<<c<<"<"<<b<<"<"<<a<<endl;
        }
    }else{
        cout<<"\t\tIf-Else"<<endl;
        cout<<"Ascending Order: "<<a<<"<"<<b<<"<"<<c<<endl;
    }

    return 0;
}