// File:    4.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/09 16:34:53
#include<iostream>

using namespace std;

int main()
{
    const int principal = 100;
    const float monopoly = 0.1, compoundInterest = 0.05;
    float daphne = 0, cleo = 0;
    int year = 1;

    daphne = principal * monopoly;
    cleo = principal * compoundInterest;

    while(cleo < daphne)
    {
        daphne += principal * monopoly;
        cleo += (cleo + principal) * compoundInterest;
        ++year;
    }
    
    cout << year << " years, Daphne: " << daphne << ",Cleo: " << cleo << endl;

    return 0;
}
