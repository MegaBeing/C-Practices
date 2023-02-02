#include<bits/stdc++.h>
using namespace std;
int main(){
    string arr;
    cin>>arr;
    string arc;
for (int i=0;arr[i+1]!=" ";i++){
    arc = arc + arr[i];
}
cout<<arc;
}