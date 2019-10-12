// File:    6.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/09/24 12:45:48
#include<iostream>

int main(){
    float miles;
    float gal;

    std::cout << "Please enter the miles and the gal: \n";
    std::cout << "miles: ";
    std::cin >> miles;

    std::cout << "gal: ";
    std::cin >> gal;

    std::cout << miles / gal << " m/gal\n";

    return 0;
}
