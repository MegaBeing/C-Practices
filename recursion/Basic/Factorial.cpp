#include<bits/stdc++.h>
using namespace std;
int fr(int n);
int main()
{
    int i;
    cout<<"Write a number >0:\t";
    cin>>i;
    cout<<fr(i);
}
int fr(int n)
{
    if(n==1)return 1;
    else if(n==0)return 1;
    else
    {
        return n*fr(n-1);
    }
}