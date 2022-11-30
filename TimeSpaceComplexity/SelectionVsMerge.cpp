#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
long TimeMe()
{
    
}
int SelSort(int a[])
{
    for(int i=0;i<=sizeof(a);i++)
    {
        int ele=a[i],id,temp;
        for(int j=i+1;j<=sizeof(a);j++)
        {
            if(j==i+1) 
            {
                temp=a[j];
                id=j;
            }
            else if (a[j]<temp) 
            {
                temp=a[j]; 
                id=j;
            }
        }
    if(a[i]>a[id]) swap(a[i],a[id]);
    }
}
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
        int x[1000000];
        for(int i = 0;i<=mid;i++)
        {
            x[i]=a[i];
        }
        int y[1000000];
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
    for(int n=10;n<=1000000;n*=10)
    {
        int arr[n];
        long start , end ;
        for (int i=0;i<n;i++)
        {
            arr[i]=n-i;
        }
        start = TimeMe();
        MerSort(arr,0,n-1);
        end = TimeMe();
        cout<<"n="<<n<<"\t Time: "<<end-start<<endl;
    }
    return 0;
}