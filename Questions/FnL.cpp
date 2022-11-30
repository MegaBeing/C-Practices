#include<bits/stdc++.h>
using namespace std;
int first(int a[],int s);
int last(int a[],int s);
int main()
{
    int size;
    cout<<"Size:\t";
    cin>>size;
    int a[size];
    cout<<"\nEnter Elements:";
    for (int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"\nElement to be searched:\t";
    int f;
    cin>>f;
    cout<<"\nFirst appearance:\t"<<first(a,f);
    cout<<"\nLast appearance:\t"<<last(a,f);
    return 0;
}
int first(int a[],int s)
{
    for(int i=0;i<sizeof(a);i++)
    {
        if(a[i]==s)
        {
            return i+1;
        }
    }
}
int last(int a[],int s)
{
    int temp;
    for(int i=0;i<sizeof(a);i++)
    {
        if(a[i]==s)
        {
            temp=i+1;
        }
    }
    return temp;
}