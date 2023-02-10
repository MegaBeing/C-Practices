#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>> mat,vector<bool> &visited,int v){
    queue<int> ginger;
    cout<<"Initiation node: ";
    int s;
    cin>>s;
    ginger.push(s);
    visited[s]=true;
    while(ginger.empty()==false){
        for(int i=0;i<v;i++){
            if(mat[ginger.front()][i]==1 && visited[i]==false){
                ginger.push(i);
                visited[i]=true;
            }
        }
        s=ginger.front();
        cout<<s<<" ";
        ginger.pop();
        
    }
}
int main(){
    int v,e;
    cout<<"Vertices: ";
    cin>>v;
    cout<<"Edges: ";
    cin>>e;
    vector<vector<int>>mat(v,vector<int>(v,0));
    int a,b;
    for(int i=0;i<e;i++){
        cin>>a;
        cin>>b;
        mat[a][b]=1;
        mat[b][a]=1;
    }
    vector<bool> visited(v,false);
    bfs(mat,visited,v);
    return 0;
}