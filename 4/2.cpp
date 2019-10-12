// File:    2.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/04 19:58:14
#include<iostream>
#include<string>
int main(){
    using namespace std;
    string name;
    string dessert;

    cout << "Enter your name :\n";
    cin >> name;

    cout << "Enter your favorite desert:\n";
    cin >> dessert;

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}
