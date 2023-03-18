#include<bits/stdc++.h>
using namespace std;
int pro(int *wts, int *price, int n,int bw){
    if(n==0)return 0;
    if(wts[n-1]>bw){
        int ans=0+pro(wts,price,n-1,bw);
        return ans;
    }
    
    int inc=price[n-1]+pro(wts,price,n-1,bw-wts[n-1]);
    int exc=pro(wts,price,n-1,bw);
    return max(inc,exc);
}
int main(){
    cout<<"Enter the weight of knapsack:\t";
    int weight;
    cin>>weight;
    cout<<"Enter the number of items:\t";
    int size;
    cin>>size;
    cout<<"Enter the weight as well as price of the items:\n";
    int wts[size],price[size];
    for(int i=0;i<size;i++){
        cout<<i+1<<" Weight:\t";
        cin>>wts[i];
        cout<<i+1<<" Price:\t";
        cin>>price[i];
    }
    cout<<"Max profit:\t"<<pro(wts,price,size,weight);
        return 0;
}