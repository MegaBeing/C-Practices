#include<bits/stdc++.h>
using namespace std;
void traversal(vector<vector<int>> mat,int ver,vector<bool> &visited){
    // cout<<ver+1<<" ";
    int n=mat.size();
    visited[ver]=true;
    for(int i=0;i<n;i++){
        if(mat[ver][i]==1 && visited[i]==false){
            traversal(mat,i,visited);
        }
    }
}
void DFS(vector<vector<int>> mat,int v){
    int count=0;
    vector<bool> visited(v,false);
    for(int i=0;i<v;i++){
        if(!visited[i]){
            count++;
            traversal(mat,i,visited);
        }
    }
    cout<<endl<<"The connected components: "<<count;
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
        cin>>a>>b;
        a--;
        b--;
        mat[a][b]=1;
        mat[b][a]=1;
    }
    DFS(mat,v);
}