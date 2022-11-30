#include<bits/stdc++.h>
using namespace std;
int Len(char s[],int a);
int main()
{
    char ch[100];
    cout<<"Input: ";
    cin>>ch;
    cout<<"Len: "<<Len(ch,0);
}
int Len(char s[],int a)
{
    if(s[a]=='\0') return 0;
    else return 1+Len(s,a+1);
}