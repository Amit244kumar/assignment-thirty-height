#include<conio.h>
#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<char>l1;
    list<char>::iterator t;
    l1.push_back('A');
    l1.push_back('M');
    l1.push_back('I');
    l1.push_back('T');

    for(t=l1.begin();t!=l1.end();t++)
        cout<<*t;
    getch();
    return 0;
}
