#include<iostream>
void func(int, int);
using namespace std;

int main(){
    int hours;
    int minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;

    cout << "Enter the number of minutes: ";
    cin >> minutes;

    func(hours, minutes);

    return 0;
}

void func(int hours, int minutes){
    cout << "Time: " << hours << ":" << minutes << endl;
    return;
}
