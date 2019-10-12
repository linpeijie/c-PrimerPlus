// File:    6.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/10 19:27:08
#include<iostream>

using namespace std;

struct patron
{
    char name[20];
    double money;
};

int main()
{
    int num;

    cout << "Please enter how many people: ";
    cin >> num;
    cin.get();

    patron *patrons = new patron[num];
    int *grandPatrons = new int[num];

    for (int i = 0; i < num; ++i)
    {
        cout << "Type the "<< i+1 << "th Patron's name:";
        cin.get(patrons[i].name, 20).get();
        cout << "How much did he(she) donate? :";
        cin >> patrons[i].money;
        cin.get();

        if(patrons[i].money > 10000)
            grandPatrons[i] = 1;
    }

    cout << "Grand Patrons: ";
    for (int i = 0; i < num; ++i)
    {
        if(grandPatrons[i] == 1)
            cout << patrons[i].name << '\t';
    }

    cout << endl;

    cout << "Patrons: ";
    for (int i = 0; i < num; ++i)
        if(grandPatrons[i] == 0)
            cout << patrons[i].name << '\t';

    cout << endl;

    delete [] patrons;
    delete [] grandPatrons;

    return 0;
}
