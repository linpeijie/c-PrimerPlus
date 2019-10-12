// File:    7and8.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/04 21:39:10
#include<iostream>

int main(){
    using namespace std;

    struct PizzaData {
        char company[20];
        float diam;
        float weight;
    };

    PizzaData * pizza = new PizzaData;

    cout << "Enter the diam of a pizza: ";
    cin >> pizza->diam;

    cout << "Enter the weight of a pizza: ";
    cin >> pizza->weight;

    cout << "Enter the company name: ";
    cin >> pizza->company;

    cout << "company name: " << pizza->company << endl;
    cout << "pizza diam: " << pizza->diam << endl;
    cout << "pizza weight: " << pizza->weight << endl;

    delete pizza;

    return 0;
}
