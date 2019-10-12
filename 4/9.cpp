// File:    9.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/04 22:10:10
//
#include<iostream>
int main(){
    using namespace std;

    struct CandyBar{
        char brand[30];
        float weight;
        int calorie;
    };
    
    CandyBar * snack = new CandyBar[2];

    strcpy(snack[0].brand,"Mocha Much");

    cout << snack[0].brand << endl;

    delete [] snack;

    return 0;
}
