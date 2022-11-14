#include<conio.h>
#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>l1;
    list<int>l2;
    list<int>::iterator t;
    int f;
    cout<<"Enter 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        l1.push_front(f);
    }
    l2.assign(l1.begin(),l1.end());
    cout<<"The other list create by assign"<<endl;
    for(t=l2.begin();t!=l2.end();t++)
        cout<<*t<<" ";

}
