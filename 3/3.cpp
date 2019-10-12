// File:    3.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/09/24 11:03:45
#include<iostream>

int main(){
    int degree;
    int minutes;
    int seconds;
    float res;

    const int d2m = 60;
    const int m2s = 60;

    std::cout << "Enter a latitude in degree, minutes, and seconds:\n";
    std::cout << "First, enter the degree: ";
    std::cin >> degree;
    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> minutes;
    std::cout << "Finally, enter the seconds of arc: ";
    std::cin >> seconds;

    res = degree + float(minutes) / d2m + float(seconds) / m2s / d2m;

    std::cout << degree << " degrees, " << minutes << " minutes, " << seconds << 
        " seconds = " << res << " degrees." << std::endl;

    return 0;
}
