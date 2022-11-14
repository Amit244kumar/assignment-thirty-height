#include<conio.h>
#include<iostream>
#include<list>

using namespace std;

void removeAllconst(list<int>&l)
{
    int f=0;
    list <int>::iterator t;
    for(t=l.begin();t!=l.end();t++)
    {
        if(f<*t)
            f=*t;
    }

    int ar[f]={0};
    for(t=l.begin();t!=l.end();t++)
           ar[*t]+=1;


    l.clear();
    for(int i=0;i<f;i++)
        if(ar[i]==1)
           l.push_back(ar[i]);


}
int main()
{
    int f;
    list<int>l1;
    list<int>::iterator t;
    cout<<"Enter 10 elements of list"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>f;
        l1.push_back(f);
    }
    removeAllconst(l1);
    for(t=l1.begin();t!=l1.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;
}


