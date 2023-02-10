#include<bits/stdc++.h>
using namespace std;
int main(){
    int weight;
    cout<<"Weight: ";
    cin>>weight;
    cout<<"No. of Items: ";
    int size;
    cin>>size;
    int wts[size],price[size];
    for(int i=0;i<size;i++){
        cout<<i+1<<" Weight: ";
        cin>>wts[i];
        cout<<i+1<<" price: ";
        cin>>price[i];
    }
    int inc,exc;
    int dp[size+1][weight+1];
    for(int i=0;i<=size;i++){
        for(int j=0;j<=weight;j++){
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(wts[i-1]>j)
                dp[i][j]=dp[i-1][j];
            inc = price[i-1]+dp[i-1][j-wts[i-1]];
            exc = dp[i-1][j];
            dp[i][j]=max(inc,exc);
        }
    }
    cout<<dp[size][weight];
}