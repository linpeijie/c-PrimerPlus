// File:    2.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/10 16:34:45
#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    const int Max = 10;
    double donation[Max], sum=0.0, average = 0.0;
    int index = 0, n=0;
    char ch;

    cin.get(ch);
    while(index < Max && isdigit(ch))
    {
        donation[index] = ch - 48;
        sum += ch-48;
        ++index;
        cin.get(ch);
    }

    average = sum / index;

    for(int i = 0; i < index; ++i)
        if (donation[i] > average)
            ++n;

    cout << "average :" << average << endl;
    cout << "than averrage:" << n << endl;

    return 0;
}
