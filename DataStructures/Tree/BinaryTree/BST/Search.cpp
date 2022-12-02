#include<bits/stdc++.h>
using namespace std;
class node{
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
            return ;
        }
    }
}
void Search(node *root,int key){
    if(root==nullptr){
        cout<<"Not found";
        return ;
    }
    if(key==-1){
        cout<<"Used for termination";
        return ;
    }
    else if(root->data==key){
        cout<<"key found";
        return ;
    }
    else if(root->data>key){
        Search(root->left,key);
    }
    else{
        Search(root->right,key);
    }
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
    int key;
    cout<<"Enter key: ";
    cin>>key;
    Search(root,key);
    return 0;
}