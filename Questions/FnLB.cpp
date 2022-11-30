#include<bits/stdc++.h>
using namespace std;
int first(int a[],int s, int e,int f);
int last(int a[],int s,int e,int f);
int main()
{
    int t;
    cout<<"Size:\t";
    cin>>t;
    int a[t];
    cout<<"\nArray:\n";
    for (int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    int f;
    cout<<"Search:\t";
    cin>>f;
    cout<<"\nPos of First Appreance:\t"<<first(a,0,t-1,f);
    cout<<"\nPos of Last Appreance:\t"<<last(a,0,t-1,f);
    return 0;
}
int first(int a[],int s, int e,int f)
{
    int temp;
    while(s!=e || s<e)
    {
        int mid=(s+e)/2;
        if(a[mid]==f)
        {   
            temp=mid;
            break;
        }
        else if(a[mid]>f)
        {
            e=mid;
        }
        else s=mid;
    }
   int i=temp;
    while(f==a[i])
    {
        temp=i;
        i++;
    }
    return temp+1;
}
int last(int a[],int s,int e,int f)
{
   int temp;
    while(s!=e || s<e)
    {
        int mid=(s+e)/2;
        if(a[mid]==f)
        {   
            temp=mid;
            break;
        }
        else if(a[mid]>f)
        {
            e=mid;
        }
        else s=mid;
    }
   int i=temp;
    while(f==a[i])
    {
        temp=i;
        i--;
    }
    return temp+1; 
}