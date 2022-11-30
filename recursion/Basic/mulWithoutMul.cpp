#include<bits/stdc++.h>
using namespace std;
int mul(int a , int b);
int main()
{
    int a , b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"The product of these numbers: "<<mul(a,b);
}
int mul(int a , int b)
{
    if(b==1)return a;
    else return a+mul(a,b-1);
}