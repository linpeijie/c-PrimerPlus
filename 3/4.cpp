// File:    4.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/09/24 11:24:54
#include<iostream>

int main(){
    long seconds;
    const int h = 24;
    const int m = 60;
    const int s = 60;

    int days;
    int hours;
    int minutes;
    long second;

    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;

    second = seconds;

    days = seconds / (h * m * s);
    seconds %= h * m * s;

    hours = seconds / (m * s);
    seconds %= m * s;

    minutes = seconds / s;
    seconds %= s;

    std::cout << second << " seconds = " << days << " days, " << hours << " hours, "
        << minutes << " minutes, " << seconds << " seconds." << std::endl;

    return 0;
}
