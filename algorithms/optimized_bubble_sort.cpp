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
    bool m;
    for(int i=0; i<4;i++)
    {
        if(arr[i]<arr[i+1])
        {   
            m=true;
        }
        else
        {
            m=false;
            break;
        }
    }
    if(m==false)
    {
        for(int i=0;i<4;i++)
        {   cout<<"\n\nSequence no:"<<i+1;
            for(int j=0;j<4;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            cout<<"\niteration: "<<j+1<<"\nArray: ";
            for(int x=0;x<5;x++)
            {
                cout<<arr[x]<<" ";
            }
            
            }
        }
    cout<<"\n\nArray sorted: ";
    for(int x=0;x<5;x++)
            {
                cout<<arr[x]<<" ";
            }
    }
    else
    {   cout<<"array sorted: ";
        for(int x=0;x<5;x++)
        {
            cout<<arr[x]<<" ";
        }
    }
}