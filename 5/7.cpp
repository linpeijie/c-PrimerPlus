// File:    7.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/09 19:10:24
#include<iostream>
#include<string>

using namespace std;

struct car
{
    char company[20];
    int date;
};

int main()
{
    int num;
    cout << "How many cars do you wish to catalog? Enter: ";
    cin >> num;
    cin.get();

    car *cars = new car [num];

    for (int i = 1; i <= num; ++i)
    {
        cout << "Car #" << i << endl;
        cout << "Please enter the make: ";
        cin.get(cars[i-1].company, 20).get();

        cout << "Please enter the year made: ";
        cin >> cars[i-1].date;
        cin.get();
    }

    cout << "Here is your collection:\n";
    for (int i = 0; i < num; ++i)
        cout << cars[i].date << " " << cars[i].company << endl;

    delete [] cars;

    return 0;
}
