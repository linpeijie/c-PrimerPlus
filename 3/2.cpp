// File:    2.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/09/23 23:50:28

#include<iostream>

double bmi(int, int, float);

const int cf = 12;
const float toM = 0.0254;
const float kg2dl = 2.2;

int main(){

    int ft;
    int in;
    float dl;
    double res;
    char c;

    std::cout << "Input your height with ft-in type(eg: 5 - 10): ";
    std::cin >> ft >> c >> in;
    std::cout << "Input your weight: ";
    std::cin >> dl;

    res = bmi(ft, in, dl);

    std::cout << "Your bmi is: " << res << std::endl;

    return 0;
}

double bmi(int ft, int in, float dl){
    float height;
    float weight;

    height = (ft * cf + in) * toM;
    weight = dl / kg2dl;

    return weight / height*height;
}
