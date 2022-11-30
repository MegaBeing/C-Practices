#include<bits/stdc++.h>
using namespace std;
class node {
    public: 
    int data;
    node *left,*right;
    node(int data){
        this->data=data;
        left=nullptr;
        right=nullptr;
    }
};

node* getter(){
    int data;
    cin>>data;
    if(data==-1) return nullptr;    //using -1 as termination
    node *root=new node(data);
    cout<<"enter left:\t";
    node *l=getter();
    cout<<"enter right:\t";
    node *r=getter();
    root->left=l;
    root->right=r;
    return root;
}
void print(node *root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" : ";
    if(root->left!=nullptr){
        cout<<"L"<<root->left->data<<" ";
    }
    if(root->right!=nullptr){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}
int main(){
    node *root=getter();
    print(root);
    return 0;
}