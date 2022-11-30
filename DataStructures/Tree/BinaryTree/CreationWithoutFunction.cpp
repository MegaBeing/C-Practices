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
    ~node(){
        delete left;
        delete right;
    }
};
void print(node *root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" : ";
    if(root->left!=nullptr){
        cout<<"L"<<root->left->data<<" ";
    }
    if(root->right!=nullptr){
        cout<<"R"<<root->right->data<<" ";
    }
    cout<<endl;
    print(root->left);
    print(root->right);

}
int main(){
    node *root=new node(1);
    node *l=new node(2);
    node *r=new node(3);

    root->left=l;
    root->right=r;
    print(root);
    return 0;
}
