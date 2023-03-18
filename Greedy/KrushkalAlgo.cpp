#include<bits/stdc++.h>
using namespace std;
int parent[100];
int makeset(int a){
    parent[a]=a;
}
int find(int i){
if(parent[i]==i){
    return i;
}
return parent[i];
}
void union(int a,int b){
    int ap=find(a);
    int bp=find(b);
    
}
void krushkal(vector<vector<int>> mat){
    for()
}
int main(){
    int ver,ed;
    cout<<"Enter Vertices: ";
    cin>>ver;
    cout<<"Enter Edges: ";
    cin>>ed;
    vector<vector<int>> mat;
    int a,b,weight;
    for(int i=0;i<ed;i++){
        cin>>weight>>a>>b;
        mat.push_back({weight,a,b});
    }
    krushkal(mat);
    return 0;
}