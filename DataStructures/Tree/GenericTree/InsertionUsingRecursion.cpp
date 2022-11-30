#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    vector<node*> children;
    node(int data){
        this->data=data;
    }
};
node* getter(){
    int data;
    cout<<"Enter the Data:\t";
    cin>>data;
    node* root=new node(data);
    int size;
    cout<<"Enter the number of childen for the node ["<<root->data<<"]:\t";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Entering the "<<i+1<<" Child:\n";
        node *child=getter();
        root->children.push_back(child);
    }
    return root;
}
void printTree(node *root){
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}
int main(){
    node *root=getter();
    printTree(root);
    return 0;
}