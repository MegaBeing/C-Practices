#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Size: ";
    cin>>size;
    int arr[size];
    cout<<"input:\n";
    //taking input
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sep=1;
    int start,end;
    int s1=0,s2=0;
    bool t=false;
    //loop1
    for(sep=1;sep<size;sep++){
        start=0;
        end=start+sep;
        while(end<size){
            s2=0;
            if(t==false){
                for(int i=start;i<=end;i++){
                s1+=arr[i];
            }
            t=true;
            }
            else{
                for(int i=start;i<=end;i++){
                s2+=arr[i];
            }
            if(s2>s1){
                s1=s2;
            }
            }
            start++;
            end++;
        }
    }   
cout<<"maximum sum : "<<s1;
    return 0;
}