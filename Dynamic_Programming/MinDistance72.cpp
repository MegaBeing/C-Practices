#include<bits/stdc++.h>
using namespace std;
int md(string a, int m, string b,int n){
    if(m==0)return n;
    if(n==0)return m;
    if(a[m-1]==b[n-1])return md(a,m-1,b,n-1);
    int i=md(a,m,b,n-1);
    int d=md(a,m-1,b,n);
    int r=md(a,m-1,b,n-1);
    return 1+min(i,min(d,r));
}
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    cout<<md(a,a.size(),b,b.size());
    return 0;
}