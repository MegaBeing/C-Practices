#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *left, *right;
    node (int data){
        this->data=data;
        left=nullptr;
        right=nullptr;
    }
};
class queu{
    public: 
    queu *next;
    node *data;
    queu(node *data){
        this->data=data;
        next=nullptr;
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
void insertion(){
    int data;
    cout<<"Enter data for the root node:    ";
    cin>>data;
    if(data==-1){
        cout<<"Your tree is empty";
        return;
    }
    node *root=new node(data);
    queu *front=new queu(root);
    queu *back=nullptr;
    cout<<"Enter the children of root\n";
    int count;
    while(front!=nullptr){
        cout<<"Data:\t";
        cin>>data;
        if(data!=-1){
            node *n=new node(data);
            if(back==nullptr){
            back=new queu(n);
            front->next=back;
            }
            else{
                back->next=new queu(n);
                back=back->next;
            }
            if(front->data->left==nullptr){
                front->data->left=n;
            }
            else if(front->data->right==nullptr){
                front->data->right=n;
                front=front->next;
            }
        }
        else{
            count++;
            if(count==2){
                front=front->next;
                count=0;
            }
        }
       
    }
    print(root);
}

int main(){
    insertion();
    return 0;
}


