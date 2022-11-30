#include<iostream>
using namespace std;
int count(float a);
int main()
{
    cout<<"Enter the number: ";
    float n;
    cin>>n;
    cout<<"digits: "<<count(n);
}
int count(float a)
{
    if(a>0.0 && a<1.0) return 0;
    else return 1+count(a/10);
}