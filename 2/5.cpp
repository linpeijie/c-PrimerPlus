#include<iostream>

int main(){
    int celsius;

    std::cout << "Please enter a Celsius value:";
    std::cin >> celsius;
    std::cout << celsius << " degrees is " << 1.8*celsius + 32.0 << " degrees Fahrenheit." << std::endl;

    return 0;
}
