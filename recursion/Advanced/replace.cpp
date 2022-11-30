#include<bits/stdc++.h>
using namespace std;
string rep(char ch[],char b,char c,int i);
int main()
{
    char ch[100];
    cout<<"Input: ";
    cin>>ch;
    char b;
    cout<<"Find: ";
    char c;
    cin>>c;
    cout<<"replace: ";
    cin>>b;
    string f=rep(ch,b,c,0);
    cout<<"The new string is: "<<f;
}
string rep(char ch[],char b,char c,int i)
{
    if(ch[i]=='\0') return "";
    else
    {
        if(ch[i]==c) return b + rep(ch,b,c,i+1);
        else return ch[i] + rep(ch,b,c,i+1);
    }
}