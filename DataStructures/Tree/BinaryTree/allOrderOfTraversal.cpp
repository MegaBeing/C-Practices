#include<bits/stdc++.h>
using namespace std;
class node{
    public: 
    int data;
    node *left,*right;
    node(int data){
        this->data=data;
        left=nullptr;
        right=nullptr;
    }
};
void Inorder(node *root){
    if(root==nullptr){
        return ;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void Preorder(node *root){
    if(root==nullptr) return;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void Postorder(node *root){
    if(root==nullptr) return ;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}
void getter(){
    int data;
    cout<<"Enter root:  ";
    cin>>data;
    node *root=new node(data);
    queue<node*> q;
    q.push(root);
    int count=0;
    while(q.empty()!=true){
        cout<<"Data:\t";
        cin>>data;
        if(data!=-1){
            node *n=new node(data);
            q.push(n);
            if(q.front()->left==nullptr){
                q.front()->left=n;
            }
            else if(q.front()->right==nullptr){
                q.front()->right=n;
                q.pop();
            }
        }
        else{
            count++;
            if(count==2){
                q.pop();
                count=0;
            }
        }
    }
    cout<<"Inorder: ";
    Inorder(root);
    cout<<"\nPreorder: ";
    Preorder(root);
    cout<<"\nPostorder: ";
    Postorder(root);
}
int main(){
    getter();
    return 0;
}
