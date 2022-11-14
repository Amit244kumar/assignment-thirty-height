#include<conio.h>
#include<iostream>
#include<list>

using namespace std;

int main()
{
    int arr[5];
    list<int>l1;
    list<int>::iterator t;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<5;i++)
        cin>>arr[i];
    for(int i=0;i<5;i++)
        l1.push_back(arr[i]);
    cout<<"The array elements copy"<<endl;
    for(t=l1.begin();t!=l1.end();t++)
        cout<<*t<<" ";

    getch();
    return 0;

}
