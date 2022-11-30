#include<bits/stdc++.h>
using namespace std;
float gSum(float a, int b);
int main()
{
    float a;
    int b;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"Enter the nth term: ";
    cin>>b;
    cout<<"The gSum = "<<gSum(a,b);
}
float gSum(float a, int b)
{
    if(b==1)return 1+(1/a);
    else return (1/(pow(a,b)))+gSum(a,b-1);
}