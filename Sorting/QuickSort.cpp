#include <bits/stdc++.h>
using namespace std;
void quickSort(int a[],int s,int e);
int partition(int a[],int s, int e);
int main()
{
    int a[6]={5,2,6,4,1,3};
    quickSort(a,0,5);
    for (int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
int partition(int a[],int s, int e)
{
    int pivot=a[e];
    vector <int> x,y;
    for (int i=0;i<=e-1;i++)
    {
        if(a[i]<pivot) x.push_back(a[i]);
        else y.push_back(a[i]);
    }
    for(int i=0;i<x.size();i++)
    {
        a[i]=x[i];
    }
    a[x.size()]=pivot;
    int p=x.size();
    for(int i=0;i<y.size();i++)
    {
        a[p+i+1]=y[i];
    }
    return p;
}
void quickSort(int a[],int s, int e)
{
    if(s==e || s>e) return ;
    int p=partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);

}