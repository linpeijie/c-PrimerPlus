// File:    2.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/09 16:08:48
#include <iostream>
#include <array>

using namespace std;

const int ArSize = 16;

int main()
{
    array<long double, ArSize> factorials;

    factorials[0] = factorials[1] = 1;

    for (int i = 2; i < ArSize; ++i)
        factorials[i] = i * factorials[i-1];

    for (int i = 0; i < ArSize; ++i)
        cout << i << "! = " << factorials[i] << endl;

    return 0;
}
