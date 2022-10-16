/**
 * @file ThreeNumberAscendingAndDescending.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Three numbers ascending and descending ordered print
 * @version 0.1
 * @date 2022-10-16
 * @since SunDay; 05:42 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
// #include <algorithm>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    // string str = "123";
    // while(next_permutation(str.begin(), str.end())){
    //     cout<<str<<endl;
    // }
    int a, b, c;
    cout<<"Enter a, b, c respectively:"<<endl;
    cin>>a>>b>>c;
    if((a > b) && a > c){
        cout<<"\tBIG VALUE: "<<a<<endl;
        if(b > c){
            cout<<"\tMid Value: "<<b<<endl;
            cout<<"\nsmall value: "<<c<<endl;
            cout<<"Ascending order: "<<c<<"<"<<b<<"<"<<a<<endl;
            cout<<"Descending order: "<<a<<">"<<b<<">"<<c<<endl;
        }else{
            cout<<"\tMid Value: "<<c<<endl;
            cout<<"\tsmall value: "<<b<<endl;
            cout<<"Ascending order: "<<b<<"<"<<c<<"<"<<a<<endl;
            cout<<"Descending order: "<<a<<">"<<c<<">"<<b<<endl;
        }
    }else if((b > a) && (b > c)){
        cout<<"\tBIG VALUE: "<<b<<endl;
        if(a > c){
            cout<<"\tMid Value: "<<a<<endl;
            cout<<"\tsmall value: "<<c<<endl;
            cout<<"Ascending order: "<<c<<"<"<<a<<"<"<<b<<endl;
            cout<<"Descending order: "<<b<<">"<<a<<">"<<c<<endl;
        }else{
            cout<<"\tMid Value: "<<c<<endl;
            cout<<"\tsmall value: "<<a<<endl;
            cout<<"Ascending order: "<<a<<"<"<<c<<"<"<<b<<endl;
            cout<<"Descending order: "<<b<<">"<<c<<">"<<a<<endl;
        }
    }else{
        cout<<"\tBIG VALUE: "<<c<<endl;
        if(a > b){
            cout<<"\tMid Value: "<<a<<endl;
            cout<<"\tsmall value: "<<b<<endl;
            cout<<"Ascending order: "<<b<<"<"<<a<<"<"<<c<<endl;
            cout<<"Descending order: "<<c<<">"<<a<<">"<<b<<endl;
        }
        else{
            cout<<"\tMid Value: "<<b<<endl;
            cout<<"\tsmall value: "<<a<<endl;
            cout<<"Ascending Order: "<<a<<"<"<<b<<"<"<<c<<endl;
            cout<<"Descending order: "<<c<<">"<<b<<">"<<a<<endl;
        }
    }
    return 0;
}
