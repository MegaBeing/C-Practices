#include<bits/stdc++.h>
using namespace std;
int search(int a[],int k);
int main()
{
    int size;
    cout<<"Size:\t";
    cin>>size;
    int a[size];
    cout<<"\nArray:\t";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"\nSearch:\t";
    cin>>k;
    cout<<"\nElement found in the pos:"<<search(a,k);
    return 0;
}
int search(int a[],int k)
{
    int s=0;
    int e=sizeof(a)-1;
    while(s<=e)
    {   
        int mid=(s+e)/2;
        if(a[mid]==k)return mid;
        else if(a[mid]>=s)
        {
            if(k>=a[s] && k<=a[mid])e=mid-1;
            else s=mid+1;
        }
        else
        {
            if(k>=a[mid] && k<=a[e])s=mid+1;
            else e=mid-1;
        }
        return -1;
    }
}