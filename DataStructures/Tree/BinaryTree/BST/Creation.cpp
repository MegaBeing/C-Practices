#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left, *right;
    node(int data){
        this->data=data;
        left=nullptr;
        right=nullptr;
    }
};
void getter(node *root,int data){
    if(data==-1)return ;
    else if(root->data>data){
        if(root->left!=nullptr){
            getter(root->left,data);
        }
        else{
        node *n = new node(data);
        root->left=n;
        return;}
    }
    else {
        if(root->right!=nullptr){
            getter(root->right,data);
        }
        else{
        node *n = new node(data);
        root->right=n;
        return;}
    }
}
void inorder(node *root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    int data;
    cout<<"Data:\t";
    cin>>data;
    node *r=new node(data);
    while(data!=-1){
        cout<<"Data:\t";
        cin>>data;
        getter(r,data);

    }
    cout<<"Inorder:\t";
    inorder(r);
    return 0;
}