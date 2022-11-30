#include<iostream>
using namespace std;
int cZ(int a);
int main()
{
    cout<<"Enter the number: ";
    int a;
    cin>>a;
    cout<<"The number of Zeros: "<<cZ(a);
}
int cZ(int a)
{
    if(a==0) return 0;
    else
    {
        int b = a/10;
        int c=a%10;
        if(c==0) return 1+cZ(b);
        else return cZ(b);
    }
}