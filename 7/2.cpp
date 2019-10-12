// File:    2.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/12 13:44:03
#include<iostream>

using namespace std;

int arrInput(double [], int);
void arrPrint(double [], int);
double arrMean(double [], int);

int main()
{
    double arr[10];
    int num;

    cout << "Please enter at most ten scores (end of -1): ";
    num = arrInput(arr, 10);

    cout << "scores: ";
    arrPrint(arr, num);

    cout << "Mean: " << arrMean(arr, num) << endl;

    return 0;
}

int arrInput(double *arr, int size)
{
    double x;
    int num=0;

    for(int i=0; i < size; ++i){
        cin >> x;
        if(x < 0)
            break;
        arr[i] = x;
        num = i+1;
    }

    return num;
}

void arrPrint(double arr[], int num)
{
    for(int i = 0; i < num; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

double arrMean(double arr[], int num)
{
    double sum = 0;

    for(int i = 0; i < num; ++i)
        sum += arr[i];

    return sum / num;
}
