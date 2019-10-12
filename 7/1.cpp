// File:    1.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/12 12:27:14
#include<iostream>

using namespace std;

double mean(float, float);

int main()
{
    float x, y;

    cout << "Enter two numbers (end of 0): ";
    cin >> x >> y;

    while(x != 0 && y != 0)
    {
        cout << "The harmonic mean of x,y is: " << mean(x, y) << endl;
        cout << "Enter two numbers (end of 0): ";
        cin >> x >> y;
    }

    return 0;
}

double mean(float x, float y)
{
    return 2.0 * x * y / (x + y);
}
