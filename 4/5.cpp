// File:    5.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/04 20:39:41
#include<iostream>

int main(){
    using namespace std;

    struct CandyBar {
        char brand[20];
        float weight;
        int calorie;
    } snack = {
        "Mocha Munch",
        2.3,
        250
    };

    cout << snack.brand << endl;
    cout << snack.weight << endl;
    cout << snack.calorie << endl;

    return 0;
}
