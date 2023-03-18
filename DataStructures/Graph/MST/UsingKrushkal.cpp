#include<bits/stdc++.h>
using namespace std;
class node{
    public: 
    int weight;
    int start,end;
    node(int weight,int start,int end){
        this->weight=weight;
        this->start=start;
        this->end=end;
    }
};
bool Compare(node* a ,node* b){
    return (a->weight > b->weight);
}
int main(){
    int v,e;
    cout<<"Vertices: ";
    cin>>v;
    cout<<"Edges: ";
    cin>>e;
    vector<vector<int>> mat(v,vector<int>(v,INT_MAX));
    int a,b,weight;
    for(int i=0;i<e;i++){
        cin>>a>>b>>weight;
        a--;
        b--;
        mat[a][b]=weight;
        mat[b][a]=weight;
    }
    // for(int i=0;i<e;i++){
    //     for(int j=0;j<e;j++){
    //         if(mat[i][j]!=INT_MAX)
    //         cout<<mat[i][j]<<" "<<i+1<<" "<<j+1<<endl;
    //     }

    // }
    vector<node*> Ls;
    for(int i=0;i<e;i++){
        for(int j=0;j<e;j++){
            if(mat[i][j]!=INT_MAX){
                node *n = new node(mat[i][j],i,j);
                cout<<"being inserted: "<< i <<" "<<j <<" "<<mat[i][j]<<endl;
                Ls.push_back(n);
                delete n;
            }
        }
    }
    sort(Ls.begin(),Ls.end(),Compare);
    for (int i=0;i<Ls.size();i++)
        cout <<Ls[i]->weight<< " ";
    return 0;
}