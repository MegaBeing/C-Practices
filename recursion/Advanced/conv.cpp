#include<bits/stdc++.h>
using namespace std;
int conv(string a, int i);
int main()
{
    string a;
    cin>>a;
    cout<<conv(a,a.length());
}
int conv(string a, int n)
{
    if(n==0)
    {
        return 0;
    }
    int s = conv(a,n-1);
    int t = a[n-1]-'0';
    return s*10+t;
}