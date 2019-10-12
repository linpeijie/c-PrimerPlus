// File:    10.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/09 20:55:11
#include<iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter number of rows: ";
    cin >> num;

    for (int i = 1; i <= num; ++i)
    {
        for (int j = 0; j < num - i; ++j)
            cout << '.';
        for (int j = 0; j < i; ++j)
            cout << '*';
        cout << '\n';
    }

    return 0;
}
