// File:    3.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/09 16:22:14
#include <iostream>

using namespace std;

int main()
{
    int x, sum=0;

    cout << "Enter a number: ";
    cin >> x;

    while(x != 0)
    {

        sum += x;
        cout << "The sum of number you enter: " << sum << endl;

        cout << "Enter a number: ";
        cin >> x;
    }

    return 0;
}
