#include<bits/stdc++.h>
using namespace std;
int iter(int n){
    int *b=new int[n+1];
    b[0]=0;
    b[1]=0;
    int x,y,z,ans;
    for(int i=2;i<=n;i++){
        x=b[i-1];
        y=z=INT_MAX;
        if(i%2==0){
            y=b[i/2];
        }
        if(i%3==0){
            z=b[i/3];
        }
        b[i]=min(x,min(y,z))+1;
    }
    ans=b[n];
    delete []b;
    return ans;
}
int brute(int n,int count){
    if(n==1){
        return count;
    }
    if(n%3==0){
        count++;
        return brute(n/3,count);
    }
    if(n%2==0){
        count++;
        return brute(n/2,count);
    }
    count++;
    return brute(n-1,count);
}
int rec(int n){
    if(n<=1){
        return 0;
    }
    int x,y,z;
    y=z=INT_MAX;
    x=rec(n-1);
    if(n%2==0){
        y=rec(n/2);
    }
    if(n%3==0){
        z=rec(n/3);
    }
    int ans = min(x,min(y,z))+1;
    return ans;
}
int memo(int n,int *arr){
    if(n<=1){
        return 0;
    }
    if(arr[n]!=-1){
        return arr[n];
    }
    int y,z;
    y=z=INT_MAX;
    int x=memo(n-1,arr);
    if(n%2==0){
        y=memo(n/2,arr);
    }
    if(n%3==0){
        z=memo(n/3,arr);
    }
    int output=min(x,min(y,z))+1;
    arr[n]=output;
    return output;

}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n+1];
    for(int i=0;i<n+1;i++){
        arr[i]=-1;
    }
    cout<<"Memorization(correct): "<<memo(n,arr)<<endl;
    cout<<"Recursive(correct): "<<rec(n)<<endl;
    cout<<"Brute(incorrect): "<<brute(n,0)<<endl;
    cout<<"Iterative(correct): "<<iter(n)<<endl;
    delete []arr;
    return 0;
}