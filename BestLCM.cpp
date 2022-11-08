/**
 * @file BestLCM.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find LCM with multiple elements
 * @version 0.1
 * @date 2022-11-08
 * @since TuesDay; 07:40 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <class DataType>
class BestLCM{
private:
    int size;
    DataType *numbers;
    unsigned long long int lcmMaxValue;
    DataType findMaxValue(void){
        lcmMaxValue = *numbers;
        for(unsigned int i = 1; i != size; i++){
            if(lcmMaxValue < *(numbers + i)){
                lcmMaxValue = *(numbers + i);
            }
        }
        return lcmMaxValue;
    }
public:
    BestLCM(int size){
        this->size = size;
        numbers = new DataType[size];
        for(unsigned int i = 0; i != size; ++i){
            cout<<"Index["<<i<<"] = ";
            cin>>*(numbers + i);
        }
        switch (size){
        case 2: findLCM(*numbers, *(numbers + 1)); break;
        case 3: findLCM(*numbers, *(numbers + 1), *(numbers + 2)); break;
        case 4: findLCM(*numbers, *(numbers + 1), *(numbers + 2), *(numbers + 3));break;
        case 5: findLCM(*numbers, *(numbers + 1), *(numbers + 2), *(numbers + 3), *(numbers + 4)); break;
        default:
            cout<<"\t\tEnter size 2-5"<<endl;break;
        }
    }
    void findLCM(DataType number1, DataType number2, DataType number3, DataType number4, DataType number5){
        lcmMaxValue = findMaxValue();
        while(true){
            if((lcmMaxValue % number1 == 0) && (lcmMaxValue % number2 == 0) && (lcmMaxValue % number3 == 0) && (lcmMaxValue % number4 == 0) && (lcmMaxValue % number5 == 0)){
                cout<<"\tThe Least Common Multiple, LCM: "<<lcmMaxValue<<endl;
                break;
            }
            ++lcmMaxValue;
        }
    }
    void findLCM(DataType number1, DataType number2, DataType number3, DataType number4){
        lcmMaxValue = findMaxValue();
        while(true){
            if((lcmMaxValue % number1 == 0) && (lcmMaxValue % number2 == 0) && (lcmMaxValue % number3 == 0) && (lcmMaxValue % number4 == 0)){
                cout<<"\tThe Least Common Multiple, LCM: "<<lcmMaxValue<<endl;
                break;
            }
            ++lcmMaxValue;
        }
    }
    void findLCM(DataType number1, DataType number2, DataType number3){
        lcmMaxValue = findMaxValue();
        while(true){
            if((lcmMaxValue % number1 == 0) && (lcmMaxValue % number2 == 0) && (lcmMaxValue % number3 == 0)){
                cout<<"\tThe Least Common Multiple, LCM: "<<lcmMaxValue<<endl;
                break;
            }
            ++lcmMaxValue;
        }
    }
    void findLCM(DataType number1, DataType number2){
        lcmMaxValue = findMaxValue();
        while(true){
            if((lcmMaxValue % number1 == 0) && (lcmMaxValue % number2 == 0)){
                cout<<"\tThe Least Common Multiple, LCM: "<<lcmMaxValue<<endl;
                break;
            }
            ++lcmMaxValue;
        }
    }
    ~BestLCM(){
        delete [] numbers;
    }
};


int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int size;
    do{
        cout<<"Enter the size of the elements  here: ";
        cin>>size;
        BestLCM <unsigned short int> lcm(size);
    }while(size != -1);
    system("pause>0");
    return 0;
}
