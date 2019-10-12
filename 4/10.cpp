// File:    10.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/04 22:45:08
#include<iostream>
#include<array>
int main(){
    using namespace std;
    
    array<float, 3> score;

    cout << "Enter three times score: ";
    cin >> score[0];
    cin >> score[1];
    cin >> score[2];

    cout << (score[0] + score[1] + score[2])/3 << endl;

    return 0;
}
