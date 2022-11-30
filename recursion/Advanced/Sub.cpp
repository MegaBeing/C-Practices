#include<bits/stdc++.h>
using namespace std;
void Sub(string a,string b);
int main()
{
    string a,b;
    int i = 0;
    cout<<"Input: ";
    cin>>a;
    cout<<"Substring: ";
    Sub(a,b);
}
void Sub(string a, string b)
{
    if(a.length()==0)
    {
        cout<<b<<endl;
        return;
    }
    Sub(a.substr(1),b);
    Sub(a.substr(1),b+a[0]);
}