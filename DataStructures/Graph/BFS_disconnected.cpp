#include<bits/stdc++.h>
using namespace std;
void traversal(vector<vector<int>> mat,int f, vector<bool> &visited){
    queue<int> ginger;
    ginger.push(f);
    visited[f]=true;
    while(!ginger.empty()){
        for(int i=0;i<visited.size();i++){
            if(mat[ginger.front()][i]==1 && visited[i]==false){
                ginger.push(i);
                visited[i]=true;
            }
        }
        int s=ginger.front();
        cout<<s+1<<" ";
        ginger.pop();
    }
}
void BFS(vector<vector<int>> mat,vector<bool> visited){
    for(int i=0;i<visited.size();i++){
        if(!visited[i]){
            count++;
            traversal(mat,i,visited);
        }
    }
}
int main(){
    int v,e;
    cout<<"Vertices: ";
    cin>>v;
    cout<<"Edges: ";
    cin>>e;
    int a, b;
    vector<vector<int>> mat(v,vector<int>(v,0));
    for(int i=0;i<e;i++){
        cin>>a>>b;
        a--;
        b--;
        mat[a][b]=1;
        mat[b][a]=1;
    }
    vector<bool> visited(v,0);
    BFS(mat,visited);
    return 0;
}