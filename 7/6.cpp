// File:    6.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/12 15:15:13
#include<iostream>

using namespace std;

int Fill_array(double [], int);
void Show_array(double [], int);
void Reverse_array(double [], int);

int main()
{
    int n;

    cout << "Please enter the lenght of the array: ";
    cin >> n;

    double *arr = new double[n];

    cout << "Please enter a sequence of int (end of not int): ";
    n = Fill_array(arr, n);
    Show_array(arr, n);

    cout << "Reverse the array...\n";
    Reverse_array(arr, n);
    Show_array(arr, n);

    delete [] arr;
    return 0;
}

int Fill_array(double *arr, int size)
{
    double e;
    int i=0;
    
    // 这里有个小bug，由于&&是先计算左边的表达式再计算右边的表达式
    // 所以 while(cin >> e && i < size)需要多输入一个数字才会结束循环
    // 即size=3时，需要输入至少4个数才会结束循环，其中第四个数没有意义
    // 所以需要将i < size 放到左边
    while(i < size && cin >> e)
    {
        arr[i] = e;
        ++i;
    }

    return i;
}

void Show_array(double arr[], int size)
{
    cout << "The array is: ";
    for(int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void Reverse_array(double *arr, int size)
{
    if(size <= 3)
        return;

    for (int i = 1; i < size / 2; ++i)
    {
        double mid = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = mid;
    }
}
