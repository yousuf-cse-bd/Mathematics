/**
 * @file DetermineLCM.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Determine Least Common Multiple(LCM) by the help of prime factor
 * @version 0.1
 * @date 2022-10-26
 * @since SunDay; 10:05 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
class DetermineLCM{
private:
    unsigned int size, temp;
    unsigned int *number;
public:
    DetermineLCM(unsigned int size){
        this->size = size;
        number = new unsigned int[size];
    }
    bool isPrimeSimle(unsigned int number){
        for(unsigned int i = 2; i*i <= number; i++){
            if(number % i == 0){
                return false;
            }
        }
        return true;
    }
    void getValues(void){
        for(unsigned int i = 0; i < size; i++){
            cout<<(i+1)<<". Enter element: ";
            cin>>*(number + i);
            findPrimeFactor(*(number+i)); /*As argument single number*/
        }
    }
    void findPrimeFactor(int number){
        temp = number;
        cout<<"\t"<<number<<": prime multiple: ";
        unsigned int i = 2;
        while(i <= number){
            if(temp % i == 0){
                if(isPrimeSimle(i)){
                    cout<<i<<" ";
                }
                temp /= i;
            }else{
                i++;
            }
        }
        cout<<endl; 
    }
    ~DetermineLCM(){
        delete [] number;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int size;
    cout<<"Enter total element number here: ";
    cin>>size;
    DetermineLCM lcmObject = DetermineLCM(size);
    lcmObject.getValues();
    return 0;
}
