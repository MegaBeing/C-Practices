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
void getter(node *root,int data){
    if(data==-1)return;
    else if(root->data>data){
        if(root->left!=nullptr){
            getter(root->left,data);
        }
        else{
            node *n=new node(data);
            node->left=n;
            return ;
        }
    }
    else{
        if(root->right!=nullptr){
            getter(root->right,data);
        }
        else{
            node *n=new node(data);
            node->right=n;
            return ;
        }
    }
}
void print(node *root){
    if(root==nullptr){
        return;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
void delete(node *n1,node *parent){
    // deletion
    if(n1==nullptr){
        cout<<"UnderFlow"<<endl;
        return ;
    }
    if(n1->right!=nullptr&&n1->right!=nullptr){
        n1=nullptr;
    }
    else if(n1->right==nullptr){
        parent->left=n1->left;
        n1=nullptr;
    }
    else if(n1->left==nullptr){
        parent->right=n1->right;
        n1=nullptr;
    }
    else{
        if(n1->left->right==nullptr){
            parent->left=n1->right;
            parent->left->left=n1->left;
        }
        else{
            node *k=n1->right;
            node *m=n1->right;
            while(k->left!=nullptr){
                k=k->left;
            }
            while(m->left!=k){
                m=m->left;
            }
            m->left=nullptr;
            parent->left=k;
            k->left=n1->left;
        }
    }
}
void SearchAndDel(node *root,int key){
    if(root==nullptr){
        cout<<"Not found";
        return ;
    }
    if(key==-1){
        cout<<"Used for termination";
        return ;
    }
    else if(root->data==key){
        
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
    print(root);
    int key;
    cout<<"Enter element to delete";
    cin>>key;
}