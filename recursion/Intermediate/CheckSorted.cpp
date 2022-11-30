#include<bits/stdc++.h>
using namespace std;
bool SortCheck(int a[],int i,int n);
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Input the elements of the array:\n";
    for (int i=0;i<n;i++)
    {
        cout<<"Input "<<i+1<<": ";
        cin>>a[i];
    }
    cout<<"SortCheck: "<<SortCheck(a,0,n);
}
bool SortCheck(int a[],int i,int n)
{
    if(i==n-1) return a[n-1]<a[n];
    else
    {
        bool m=a[i]<a[i+1];
        return m*SortCheck(a,i+1,n);
    }
}