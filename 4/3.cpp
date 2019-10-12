// File:    3.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/04 20:25:39
#include<iostream>
#include<string>

int main(){
    using namespace std;
    string f_name;
    char l_name[20];

    cout << "Enter your first name: ";
    cin >> f_name;
    cin.get();

    cout << "Enter your last name: ";
    cin.get(l_name, 20).get();

    cout << "Here's the information in a single string: ";
    cout << l_name << ", " << f_name << endl;

    return 0;
}

