#include<conio.h>
#include<iostream>
#include<list>

using namespace std;

int main()
{
    list <int>l1={3,4,5,7,55,3,6,35};
    list <int>::iterator t;
    cout<<"The elements of list"<<endl;
    for(t=l1.begin();t!=l1.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 1;
}
