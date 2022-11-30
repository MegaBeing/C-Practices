#include<bits/stdc++.h>
using namespace std;
int fe(int a[],int b,int n,int i);
int main()
{
    int n;
    cout<<"Size: ";
    cin>>n;
    cout<<"Array:\n";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<": ";
        cin>>a[i];
    }
    cout<<"Search: ";
    int b;
    cin>>b;
    cout<<"index: "<<fe(a,b,n,0);
}
int fe(int a[],int b,int n,int i)
{
    if(a[i]==b)return i+1;
    else if(i==n)
    {
        if(a[i]!=b) return -1;
    }
    else return fe(a,b,n,i+1);
}