#include<conio.h>
#include<iostream>
#include<list>
using namespace std;

int main()
{
    int f;
    list <int>l1;
    list <int>::iterator t1;
    list <int>::iterator t2;
    cout<<"Enter 10 elements "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>f;
        l1.push_front(f);
    }
    cout<<"The list elements "<<endl;
    for(t1=l1.begin();t1!=l1.end();t1++)
    {
        cout<<*t1<<" ";
    }
    cout<<endl<<"Enter element to remove all occurrence"<<endl;
    cin>>f;
    t1=l1.begin();
    while(t1!=l1.end())
    {
        if(*t1==f)
        {
            t2=t1;
            t1++;
            l1.erase(t2);
            continue;
        }
        t1++;
    }
    cout<<"The list elements after removing all occurrence"<<endl;
    for(t1=l1.begin();t1!=l1.end();t1++)
    {
        cout<<*t1<<" ";
    }
    getch();
    return 0;
}
