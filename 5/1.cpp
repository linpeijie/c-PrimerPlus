// File:    1.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/09 15:44:02
#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int sum = 0;

    cout << "Enter two numbers (x <= y):";

    cin >> x >> y;

    for (int i = x; i <= y; ++i)
    {
        sum += i;
    }

    cout << " The sum of x to y is: " << sum << endl;

    return 0;
}
