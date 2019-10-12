// File:    1.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/10 15:47:17
#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    char ch;
    
    cout << "Enter a sequence, and type @ to stop: \n";
    cin.get(ch);

    while (ch != '@')
    {
        if(isupper(ch))
            cout << (char)tolower(ch) << endl;
        else if(islower(ch))
            cout << (char)toupper(ch) << endl;
        cin.get(ch);
    }

    return 0;
}
