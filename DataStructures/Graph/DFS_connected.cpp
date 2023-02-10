#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> mat,int ver,vector<bool> &visited){
    cout<<ver<<" ";
    int n = mat.size();
    visited[ver]=true;
    for(int i=0;i<n;i++){
        if(mat[ver][i]==1 && visited[i]==false)
            dfs(mat,i,visited);
    }
}
int main(){
    int v,e;
    cout<<"Vertices: ";
    cin>>v;
    cout<<"Edges: ";
    cin>>e;
    vector<vector<int>> mat(v,vector<int>(v,0));
    int a,b;
    for(int i=0;i<e;i++){
        cin>>a;
        cin>>b;
        mat[a][b]=1;
        mat[b][a]=1;
    }
    vector<bool> visited(v,0);
    dfs(mat,0,visited);
    return 0;
}