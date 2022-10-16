/**
 * @file ThreeNumberSorted.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Three sorted values using if-else
 * @version 0.1
 * @date 2022-10-16
 * @since SunDay; 10:00 PM
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

    if((a < b) && b < c){
        cout<<"\t\tFirst Block"<<endl;
        cout<<"The big number is, c: "<<c<<endl;
        cout<<"The mid number is, b: "<<b<<endl;
        cout<<"The small number is a: "<<a<<endl;
        cout<<"Ascending Order: "<<a<<"<"<<b<<"<"<<c<<endl;
    }else if((b < a) && (a < c)){
        cout<<"\t\tSecond Block"<<endl;
        cout<<"The big number is, c: "<<c<<endl;
        cout<<"The mid number is, a: "<<a<<endl;
        cout<<"The small number is, b: "<<b<<endl;
        cout<<"Ascending Order: "<<b<<"<"<<a<<"<"<<c<<endl;
    }else if((a < b) && (a > c)){
        cout<<"\t\tThird Block"<<endl;
        cout<<"The big number, is: "<<b<<endl;
        cout<<"The mid number, is: "<<a<<endl;
        cout<<"The small number, is: "<<c<<endl;
        cout<<"Ascending Order: "<<c<<"<"<<a<<"<"<<b<<endl;
    }else if((a > b) && (b < c)){
        cout<<"\t\tFourth Block"<<endl;
        cout<<"The big number, is: "<<a<<endl;
        cout<<"The mid number, is: "<<c<<endl;
        cout<<"The small number, is: "<<b<<endl;
        cout<<"Ascending Order: "<<b<<"<"<<c<<"<"<<a<<endl;
    }else if((a > b) && (b > c)){
        cout<<"\t\tFift Block"<<endl;
        cout<<"The big number, is: "<<a<<endl;
        cout<<"The mid number, is: "<<b<<endl;
        cout<<"The small number, is: "<<c<<endl;
        cout<<"Ascending Order: "<<c<<"<"<<b<<"<"<<a<<endl;
    }else{
        cout<<"\t\tSixth Block"<<endl;
        cout<<"The big number, is: "<<b<<endl;
        cout<<"The mid number, is: "<<c<<endl;
        cout<<"The small number, is: "<<a<<endl;
        cout<<"Ascending Order: "<<a<<"<"<<c<<"<"<<b<<endl;
    }

    return 0;
}
