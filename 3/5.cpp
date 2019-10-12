// File:    5.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/09/24 11:43:47
#include<iostream>

int main(){
    long long world;
    long long us;

    float res;

    std::cout << "Enter the world's population: ";
    std::cin >> world;

    std::cout << "Enter the population of the US: ";
    std::cin >> us;

    res = (long double)us / world;

    std::cout << "The population of the US is " << res*100 << "% of the world population.\n";

    return 0;
}
