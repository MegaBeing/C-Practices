#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cout<<"Size: ";
    cin>>s;
    cout<<"Array:\n";
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+s);
    cout<<"\nSorted array: ";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    //array sorted
    int start=0,end=s-1,d,mid;
    cout<<"\n\nSearch: ";
    cin>>d;
    while(start<=end)
    {  
        mid=(start+end)/2;       //mid value
        if(arr[mid]==d)
        {
           cout<<"\n\npos: "<<mid+1; 
           break;
        }
        else if(arr[mid]>d)
        {
            end=mid-1;
        }
        else if(arr[mid]<d)
        {
            start=mid+1;
        }
    }
    if(start>end)
    {
        cout<<"\n\nElement not found!";
    }
}