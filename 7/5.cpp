// File:    5.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/12 15:03:51
#include<iostream>

using namespace std;

long long recursion(int);

int main()
{
    int n;

    cout << "Enter a int number(between 0 and 20): ";
    cin >> n;

    cout << n << "! = " << recursion(n) << endl;

    return 0;
}

long long recursion(int n)
{
    if(n == 0)
        return 1;

    return n * recursion(n-1);
}
