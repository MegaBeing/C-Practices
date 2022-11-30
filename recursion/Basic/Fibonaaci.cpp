#include<bits/stdc++.h>
using namespace std;
int fibo(int a);
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"The fibonaci series is as follows:\n";
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
        cout<<fibo(i)<<" ";
        }
    }
    else cout<<"Enter number greater than zero";
}
int fibo(int a)
{
    if(a==1)return 0;
    else if(a==2) return 1;
    else
    {
        string b;
        int ans = fibo(a-1)+fibo(a-2);
        return ans;
    }
}