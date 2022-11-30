#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int temp;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        cout<<"\niteration: "<<i+1<<"\nArray: ";
        for(int x=0;x<5;x++)
        {
            cout<<arr[x]<<" ";
        }
        
        }
    }
}