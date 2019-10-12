#include<iostream>

int main(void){
    
    void func1();
    void func2();

    func1();
    func1();

    func2();
    func2();

    return 0;
}

void func1(void){

    std::cout << "Three blind mice" << std::endl;

    return ;
}

void func2(void){
    
    std::cout << "See how they run" << std::endl;

    return ;
}
