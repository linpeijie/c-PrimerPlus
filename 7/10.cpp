// File:    10.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/12 19:38:38
#include<iostream>
using namespace std;

double add(double, double);
double calculate(double, double, double (*pf)(double, double));

int main()
{
    double x, y;

    cout << "Please enter two number (end of type any char): ";
    while(cin >> x >> y)
    {
        double q = calculate(x, y, add);
        cout << "the x + y is: " << q << endl;

        cout << "Please enter two numbers (end of not int): ";
    }

    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double calculate(double x, double y, double (*pf)(double, double))
{
    return add(x, y);
}
