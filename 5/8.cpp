// File:    8.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/09 19:53:16
#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    unsigned int n_word = 0;
    char input[128];
 
    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> input;
    while (strcmp(input, "done"))
    {
        ++n_word;
        cin >> input;
    }
 
    cout << "You entered a total of " << n_word << " words." << endl;
    return 0;
}
