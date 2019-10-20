// File:    3.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/20 13:48:16
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

string toUpper(string &str);

int main()
{
    string str;

    cout << "Enter a string (q to quit): ";
    getline(cin, str);

    while(str != "q")
    {
        cout << toUpper(str) << endl;

        cout << "Enter a string (q to quit): ";
        getline(cin, str);
    }

    return 0;
}

string toUpper(string &str)
{
    for(int i=0; i < str.size(); ++i)
        str[i] = toupper(str[i]);

    return str;
}

