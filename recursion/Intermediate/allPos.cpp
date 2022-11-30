#include<bits/stdc++.h>
using namespace std;
string pos(int a[], int b, int n, int i);
int main()
{
    cout<<"Size: ";
    int n;
    cin>>n;
    int a[n];
    cout<<"Array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<". ";
        cin>>a[i];
    }
    cout<<"Search: ";
    int b;
    cin>>b;
    cout<<"all pos: "<<pos(a,b,n,0);
}
string pos(int a[], int b, int n, int i)
{
    if((n-1)==i)
    {
        if(a[n-1]==b) return " "+to_string(i+1)+" |";
        else return " |";
    }
    else if(i==0)
    {
        if(a[i]==b)return "| "+to_string(i+1)+pos(a,b,n,i+1);
        else return "|"+pos(a,b,n,i+1);
    }
    else 
    {
        if(a[i]==b) return " "+to_string(i+1)+pos(a,b,n,i+1);
        else return pos(a,b,n,i+1);
    }
}