#include<bits/stdc++.h>
using namespace std;
int64_t fibo(int n,int64_t *arr){
    if(n==0 || n==1){
        int64_t val = n;
        return val;
    }   
    if(arr[n]!=-1){
        return arr[n];
    }
    int64_t output = fibo(n-1,arr)+fibo(n-2,arr);
    arr[n]=output;
    return output;
}
int main(){
    int n;
    cin>>n;
    int64_t *arr = new int64_t(n+1);
    for(int i=0;i<n+1;i++){
        arr[i]=-1;
    }
    cout<<fibo(n,arr);
    delete arr;
    return 0;
}