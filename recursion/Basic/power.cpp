#include<bits/stdc++.h>
using namespace std;
float p(int a , int b);
int main()
{   
    int base, power;
    cout<<"Enter the number:\t";
    cin>>base;
    cout<<"\nEnter the power:\t";
    cin>>power;
    cout<<"\nAnswer:\t"<<p(base,power);
}
float p(int a, int b)
{
    if(b==0)return 1;
    else if(b<0)
    {
        float ans=1/(a*p(a,-b-1));
        return ans;
    }
    else return a*p(a,b-1);
}