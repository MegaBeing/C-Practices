#include<bits/stdc++.h>
using namespace std;
string pr(string a[],int n,int i,bool f);
int main()
{
    int n;
    cout<<"Size: ";
    cin>>n;
    cout<<"Array: \n";
    string a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Sidha: "<<pr(a,n,0,false);
    cout<<"\nUlta: "<<pr(a,n,n-1,true);
}
string pr(string a[],int n, int i, bool f)
{
    if(f==true)
    {
        if(i==0) return a[0];   
        else return a[i]+pr(a,n,i-1,true);
    }
    else
    {
        if(i==n-1) return a[n-1];
        else return a[i]+pr(a,n,i+1,false);
    }
}