// File:    3.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/10 18:23:31
#include<iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Please enter one of the following choices:\n";
    cout << "c) carnivore\t\t\t";
    cout << "p) pianist\t\t\t\t";
    cout << endl;
    cout << "t) tree\t\t\t\t";
    cout << "g) game\t\t\t\t";

    cout << endl;
    cout << "Please enter a char (c, p, t, or g):";
    cin >> ch;

    switch(ch)
    {
        case 'c':
            cout << "carnivore\n";
            break;
        case 'p':
            cout << "pianist\n";
            break;
        case 't':
            cout << "tree\n";
            break;
        case 'g':
            cout << "game\n";
            break;
    }

    return 0;
}
