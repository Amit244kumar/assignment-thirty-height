#include<conio.h>
#include<iostream>
#include<list>

using namespace std;

int main()
{
    int d;
    list <int>l1;
    cout<<"Enter 5 elements "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>d;
        l1.push_back(d);
    }
    list <int>::iterator t;
    cout<<"The elements of list"<<endl;
    for(t=l1.begin();t!=l1.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;
}
