#include<bits/stdc++.h>
using namespace std;
void traversal(vector<vector<int>> mat,int sv,vector<bool> &visited){
    queue<int> ginger;
    int n=visited.size();
    ginger.push(sv);
    visited[sv]=true;
    int s;
    while(!ginger.empty()){
        s=ginger.front();
        // cout<<s+1<<" ";
        for(int i=0;i<n;i++){
            if(mat[s][i]==1 && visited[i]==false){
                ginger.push(i);
                visited[i]=true;
            }
        }
        ginger.pop();
    }
}
void BFS(vector<vector<int>> mat,int v){
    int count=0;
    vector<bool> visited(v,false);
    for(int i=0;i<v;i++){
        if(!visited[i]){
        traversal(mat,i,visited);
        count++;
        }
    }
    cout<<endl<<"The number of connected components: "<<count<<endl;
}
int main(){
    int v,e;
    cout<<"Vertices: ";
    cin>>v;
    cout<<"Edges: ";
    cin>>e;
    int a,b;
    vector<vector<int>>mat(v,vector<int>(v,0));
    for(int i=0;i<e;i++){
        cin>>a>>b;
        a--;
        b--;
        mat[a][b]=1;
        mat[b][a]=1;
    }
    BFS(mat,v);
}