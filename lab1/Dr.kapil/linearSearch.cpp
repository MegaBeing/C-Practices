#include<bits/stdc++.h>
using namespace std;
int liSe(int [],int,int);
int main()
{   //Sahil jain
    //E21CSEU0751
    int size;
    cout<<"Size:\t";
    cin>>size;
    int arr[size];
    cout<<"\nArray:\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int fi;
    cout<<"Search:\t";
    cin>>fi;
    int a=liSe(arr,fi,size);
    if(a==-1)cout<<"\nElement not found";
    else cout<<"\nElement found at "<<a;
    return 0;
}
int liSe(int a[],int m,int size)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==m)
        {
            return i;
        }
    }
    return -1;
}