#include<conio.h>
#include<iostream>
#include<list>

using namespace std;

int main()
{
    int f,i=0;
    list <int>l1;
    cout<<"Enter 5 elements in list"<<endl;
    while(i<5)
    {
        cin>>f;
        l1.push_back(f);
        i++;
    }
    cout<<"The last element of list"<<endl;
    cout<<l1.back()<<endl;
    cout<<"The first element of list"<<endl;
    cout<<l1.front();
    getch();
    return 0;
}

