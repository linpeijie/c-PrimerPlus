// File:    7.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/12 15:56:49
#include<iostream>
using namespace std;

const int Max = 5;

double *fill_array(double *, double *);
void show_array(const double *, const double *);
void revalue(double, double *, double *);

int main()
{
    double properties [Max];

    double *end = fill_array(properties, properties + Max);
    show_array(properties, end);

    if((end - properties) > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get()!='\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }

    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

double *fill_array(double *begin, double *end)
{
    double temp;
    int i;

    for (i = 0; i < (end - begin); i++)
    {
        cout << "Enter value #"<< (i+1) << ": ";
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get()!='\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if(temp < 0)
            break;
        *(begin + i) = temp;
    }
    return begin + i;
}

void show_array(const double *begin, const double *end)
{
    for(int i = 0; i < (end - begin); ++i)
    {
        cout << "Property #" << (i+1) << ": $";
        cout << *(begin + i) << endl;
    }
}

void revalue(double r, double *begin, double *end)
{
    for(int i = 0; i < end - begin; ++i)
        *(begin + i) *= r;
}
