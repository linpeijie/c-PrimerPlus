// File:    1.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/04 19:32:25
//
#include<iostream>

int main(){
    using namespace std;

    char f_name[20];
    char l_name[20];
    char grade;
    int age;

    cout << "What is your first name? ";
    cin.getline(f_name, 20);

    cout << "What is your last name? ";
    cin.get(l_name, 20).get();

    cout << "What letter grade do you deserve? ";
    cin >> grade;

    cout << "What is your age? ";
    cin >> age;

    cout << "name: " << f_name << "," << l_name << endl;
    cout << "Grade: " << char(grade + 1) << endl;

    cout << "Age: " << age << endl;
}
