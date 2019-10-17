// File:    2.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/17 22:05:42
#include<iostream>
#include<string>
using namespace std;

struct CandyBar
{
    string grand;
    double weight;
    int heat;
};

void setCandyBar(CandyBar &pt, string, double, int);
void show(const CandyBar &);

int main()
{
    CandyBar candybar;
    string grand;
    double weight;
    int heat;

    cout << "Please enter the grand name: ";
    cin >> grand;
    cin.get();

    cout << "Please enter the weight: ";
    cin >> weight;

    cout << "Please enter the heat: ";
    cin >> heat;

    setCandyBar(candybar, grand, weight, heat);
    show(candybar);

    return 0;
}

void setCandyBar(CandyBar &pt, string grand="Millennium Munch", double weight=2.85,
        int heat=350)
{
    pt.grand = grand;
    pt.weight = weight;
    pt.heat = heat;
}

void show(const CandyBar &candybar)
{
    cout << candybar.grand << '\n' << candybar.weight << endl;
}
