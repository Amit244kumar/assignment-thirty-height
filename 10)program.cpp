#include<iostream>
#include<conio.h>
#include<list>

using namespace std;
void Merge(list <int>&l1,list <int>&l2,list<int>&l3)
{
    list<int>::iterator t;
    for(t=l1.begin();t!=l1.end();t++)
    {
        l3.push_back(*t);
    }
    for(t=l2.begin();t!=l2.end();t++)
    {
        l3.push_back(*t);
    }

}
int main()
{
    int f;
    list <int>l1;
    list <int>l2;
    list <int>l3;
    list<int>::iterator t1;
    cout<<"Enter first list elements "<<endl;
    for(int i=0;i<5;i++){
        cin>>f;
        l1.push_back(f);
    }
    cout<<"Enter second list elements "<<endl;
    for(int i=0;i<5;i++){
        cin>>f;
        l2.push_back(f);
    }
    Merge(l1,l2,l3);
    cout<<"The merge of both list"<<endl;
    for(t1=l3.begin();t1!=l3.end();t1++)
    {
        cout<<*t1<<" ";
    }
    getch();
    return 1;
}


