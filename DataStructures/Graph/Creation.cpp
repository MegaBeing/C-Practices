#include<bits/stdc++.h>
using namespace std;
void bfs(int graph[][],int size){
    int visited[size]
    for(int i=0;i<size;i++){
        visited[i]=0;
    }
    queue<int> ginger;
    ginger.push(0);
    visited[0]=1;
    while(ginger.empty()==false){
        cout<<ginger.front();
        if(ginger.empty()==true){
            break;
        }
        else{
            ginger.pop();
        }
        for(int j=0;j<size;i++){
            if(graph[ginger.front()][j]!=-1 && visited[j]==0){
                visited[i]=1;
                ginger.push(i);
            }
        }
    }
}
void dfs(int graph[][],int size){
    int visited[size];
    for(int i=0;i<size;i++){
           visited[i]=0;
    }
    stack<int> ginger;
    ginger.push(0);
    visited[0]==1;
    while(ginger.empty()==false){
        
        for(int i=0;i<size;i++){
            if(graph[ginger.top()][i]!=-1 && visited[i]==0){
                visited[i]==0;
                ginger.push(i);
            }
        }
        cout<<ginger.top();
        if(ginger.empty()==true){
            break;
        }
        else{
            ginger.pop();
        }
    }

}