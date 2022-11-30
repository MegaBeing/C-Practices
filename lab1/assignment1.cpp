#include<bits/stdc++.h>
using namespace std;
int main()
{
int x[4]={100,0,90,21};
int y[4]={0,100,17,80};
int x1,y1;
float dist;
float min;
int index;
cin>>x1>>y1;
for(int i=0;i<4;i++)
{
dist=pow(pow((x[i]-x1),2)+pow(y[i]-y1,2),2);
if(i==0)
{
    min=dist;
    index=i;
}
else if(min>dist)
{
    min=dist;
    index=i;
}
}
string arr[4]={"action","comedy","action","comedy"};
cout<<arr[index];
return 0;
}