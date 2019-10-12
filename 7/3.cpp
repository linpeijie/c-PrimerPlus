// File:    3.cpp
// Author:  linpeijie (linpeijie_4626@163.com)
// Date:    2019/10/12 14:17:24
#include<iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void boxPrint(box);
double boxProcess(box *);

int main()
{
    box newbox;

    cout << "Enter 3 value of a newbox:\n";
    
    cout << "Maker: ";
    cin.get(newbox.maker, 40).get();

    cout << "height: ";
    cin >> newbox.height;

    cout << "width: ";
    cin >> newbox.width;

    cout << "length: ";
    cin >> newbox.length;

    cout << "It's what you enter: ";
    boxPrint(newbox);

    cout << "The volume of you input is: ";
    boxProcess(&newbox);
    cout << newbox.volume << endl;

    return 0;
}

void boxPrint(box newbox)
{
    cout << newbox.maker << " " << newbox.height << " " << newbox.width << " "
        << newbox.length << endl;
}

double boxProcess(box *newbox)
{
    newbox->volume = newbox->height * newbox->width * newbox->length;
    return newbox->volume;
}
