#include<iostream>

int main(){
    const float cf = 0.0833333;
    float ft;
    int height;

    std::cout << "Please input your height: ";
    std::cin >> height;
    ft = cf * height;
    std::cout << "Your height is " << ft << " ft.\n";

    return 0;
}
