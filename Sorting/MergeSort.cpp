#include<bits/stdc++.h>
using namespace std;
void MergeArray(int x[],int y[],int a[],int s, int e)
{
    int mid = (s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    while(i<=mid && j<=e)
    {
        if(x[i]<y[j])
        {
            a[k]=x[i];
            i++;
            k++;
        }
        else
        {
            a[k]=y[j];
            j++;
            k++;
        }
    }
    // now there can be two conditions 
    // 1. i==mid
    // 2. j==e
    // one of them must be true 
    // so to extract rest of the elements we need to use loops
    while(i<=mid)
    {
        a[k]=x[i];
        i++;
        k++;
    }
    while(j<=e)
    {
        a[k]=y[j];
        j++;
        k++;
    }
}
void MerSort(int a[],int s,int e)
{
    if(s>e||s==e)return;
    else
    {   // starting to seperate all the elements of the array
        int mid=(s+e)/2;
        int x[100];
        for(int i = 0;i<=mid;i++)
        {
            x[i]=a[i];
        }
        int y[100];
        for(int i = mid+1;i<=e;i++)
        {
            y[i]=a[i];
        }
        MerSort(x,s,mid);    //x-array is to be splitted
        MerSort(y,mid+1,e);  //y-array is to be splitted
        MergeArray(x,y,a,s,e);  //now we need to merge the sorted arrays
    }
}
int main()
{
    int a[6]={5,2,0,7,11,1};
    mergeSort(a,0,5);
    for(int i = 0; i<6;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}