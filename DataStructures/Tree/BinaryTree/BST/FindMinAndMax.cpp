#include<bits/stdc++.h>
using namespace std;
class node {
    public: 
    int data;
    node *left,*right;
    node (int data){
        this->data=data;
        left=nullptr;
        right=nullptr;
    }
};
void getter(node *root,int data){
    if(data==-1)return;
    else if(root->data>data){
        if(root->left!=nullptr){
            getter(root->left,data);
        }
        else{
            node *n=new node(data);
            root->left=n;
            return;
        }
    }
    else{
        if(root->right!=nullptr){
            getter(root->right,data);
        }
        else{
            node *n=new node(data);
            root->right=n;
            return;
        }
    }
}
void max(node *root){
    if(root->right==nullptr){
        cout<<"Max: "<<root->data;
        return;
    }
    max(root->right);
}
void min(node *root){
    if(root->left==nullptr){
        cout<<"Min: "<<root->data;
        return;
    }
    min(root->left);
}
int main(){
    int data;
    cout<<"Data: ";
    cin>>data;
    node *root=new node(data);
    while(data!=-1){
        cout<<"Data: ";
        cin>>data;
        getter(root,data);
    }
    cout<<endl;
    min(root);
    cout<<endl;
    max(root);
    return 0;
}