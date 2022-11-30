#include<bits/stdc++.h>
using namespace std;
class dist{
public:
int feet;
float inch;
dist(int i,float f)
{
    feet=i;
    inch=f;
}
dist operator * (dist const &obj) {
         dist res(0,0);
    float feet1,feet2;
    feet1=feet+(inch/12);
    feet2=obj.feet+(obj.inch/12);
    float result = feet1*feet2*10;
    res.feet=abs(result);
    res.inch=((result-res.feet)*12);
         return res;
}
};
int main()
{
    float inch1,inch2;
    int feet1,feet2;
    cin>>feet1>>inch1>>feet2>>inch2;
    dist p1(feet1,inch1),p2(feet2,inch2);
    dist p3(0,0);
    cout<<"Enter feet:Enter inches:\nEnter feet:Enter inches:\n";
    cout<<"Dist1="<<p1.feet<<"\'-"<<abs(p1.inch)<<"\"\n";
    cout<<"Dist2="<<p2.feet<<"\'-"<<abs(p2.inch)<<"\"\n";
    p3=p1*p2;
    cout<<"Dist3="<<p3.feet<<"\'-"<< fixed << setprecision(4) <<p3.inch<<"\"\n";
    return 0;
}