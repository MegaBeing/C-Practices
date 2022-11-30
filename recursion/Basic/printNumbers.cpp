#include<iostream>
using namespace std;
int pN(int a);
int main()
{
    cout<<"Enter the nth term: ";
    int a;
    cin>>a;
    if(a>0)
    {   
        cout<<"The series is as follows:\t";
        for(int i=a;i>=1;i--)
        {
            cout<<pN(i)<<" ";
        }
    }
    else cout<<"nth > 0";
}
int pN(int a)
{
    if(a==1)return 1;
    else return 1+pN(a-1);
}