// File:    9.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/09 20:38:13
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    int count=0;

    cout << "Enter words (to stop, type the word done): \n";
    cin >> str;

    while(str != "done")
    {
        ++count;
        cin >> str;
    }

    cout << "You entered a total of " << count << " words." << endl;

    return 0;
}
