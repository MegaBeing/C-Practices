#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int temp,i=0,id;
    for(int x=0;x<5;x++)
    {
        cin>>arr[x];
    }
    while(arr[i]!=arr[4])
    {    temp=arr[i];
        for(int x=i+1;x<5-i;x++)
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
        cout<<"\niteration"<<i<<"\narray:\t\n";
        for(int k=0;k<5;k++)
        {
            cout<<arr[k]<<" ";
        }
    }
}