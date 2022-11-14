#include<conio.h>
#include<iostream>
#include<list>

using namespace std;

int main()
{
   int f;
   list <int>f1={3,5,7,8,4,7,5,8,8};
   list <int>::iterator t;
   cout<<"The list elements "<<endl;
   for(t=f1.begin();t!=f1.end();t++)
   {
       cout<<*t<<" ";
   }
   cout<<endl<<"Enter element to add at first in list : "<<endl;
   cin>>f;
   f1.push_front(f);
   cout<<"Enter element to add at last in list : "<<endl;
   cin>>f;
   f1.push_back(f);
   for(t=f1.begin();t!=f1.end();t++)
   {
       cout<<*t<<" ";
   }
   getch();
   return 0;
}
