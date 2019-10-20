// File:    4.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/20 14:19:20
#include<iostream>
using namespace std;
#include<cstring>

struct stringy{
    char *str;
    int ct;
};

void set(stringy &pt, char *);
void show(const stringy &pt);
void show(const stringy &pt, int);
void show(const char *);
void show(const char *, int);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);

    testing[0] = 'D';
    testing[1] = 'u';

    show(testing);
    show(testing, 3);

    show("Done!");

    delete beany.str;
    return 0;
}

void set(stringy &pt, char *str)
{
    pt.str = new char[strlen(str) + 1];
    strcpy(pt.str, str);
    pt.ct = strlen(str);
}

void show(const stringy &pt)
{
    cout << pt.str << endl;
}

void show(const stringy &pt, int n)
{
    for(int i=0; i < n; ++i)
        cout << pt.str << endl;
}

void show(const char *str)
{
    cout << str <<endl;
}

void show(const char *str, int n)
{
    for(int i=0; i < n; ++i)
        cout << str << endl;
}
