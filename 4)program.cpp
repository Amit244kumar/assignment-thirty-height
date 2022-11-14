#include<iostream>
#include<conio.h>
#include<list>

using namespace std;

int main()
{
    list <int>l1={3,4,5,2,4,5,56,77,3};
    list <int>::iterator t;
    t=l1.end();
    t--;
    for(;t!=l1.begin();t--)
        cout<<*t<<" ";
    getch();
    return 0;
}
