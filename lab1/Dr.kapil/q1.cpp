#include <bits/stdc++.h>
using namespace std;
int main()
{   //Sahil Jain
    //E21CSEU0751
    int size;
    cout<<"Size:\t";
    cin>>size;
    int arr[size];
    int temp,i=0,id;
    for(int x=0;x<size;x++)
    {
        cin>>arr[x];
    }
    while(arr[i]!=arr[size])
    {    temp=arr[i];
        for(int x=i+1;x<size-i;x++)
        {
            if(arr[i]>arr[x] && temp>arr[x]){
                temp=arr[x];
                id=x;
            }
        }
        if(temp!=arr[i])
        {
            arr[id]=arr[i];
            arr[i]=temp;
        }
        i++;
    }
    cout<<"\nLargest number:\t"<<arr[size-1];
    cout<<"\nSecond Largest number:\t"<<arr[size-2];
    return 0;
}