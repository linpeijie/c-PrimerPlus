#include<iostream>

int main(){
    double x;
    double fuc(double x);

    std::cout << "Enter the number of light years:";
    std::cin >> x;
    std::cout << x << " light years = " << fuc(x) << " astronomical units." << std::endl;

    return 0;
}

double fuc(double x){

    return x * 63240;
}
