// File:    1.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/17 21:08:04
#include<iostream>
using namespace std;

int t = 1;

void show(char *, int);

int main()
{
    char str[30];
    int n;

    cout << "Enter a text: ";
    cin.get(str, 30).get();
    cout << "Enter a number: ";
    cin >> n;

    cout << t << " :\n";
    show(str, n);

    cout << t << " :\n";
    show(str, n);

    return 0;
}

void show(char *str, int n = 0)
{
    if(n == 0)
    {
        cout << "Your input is: " << str << endl;
    }
    else
    {
        for(int i = 0; i < t; ++i)
        {
            cout << "Your input is:" << str << endl;
        }
        t++;
    }
}
