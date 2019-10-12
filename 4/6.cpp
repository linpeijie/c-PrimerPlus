// File:    6.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/04 21:10:04
#include<iostream>

int main(){
    using namespace std;

    struct CandyBar{
        char brand[20];
        float weight;
        int calorie;
    };

    CandyBar snack[2] = {
        {"Mocha Munch", 2.3, 350},
        {"Apple", 2.5, 400}
    };

    cout << snack[0].brand << endl;

    return 0;
}
