#include<bits/stdc++.h>
using namespace std;
template<typename T>
class node{
    public:
    T data;
    vector<node<T>*> children;
    node(T data){
        this->data=data;
    }
};
int main(){
    node<int>* root=new node<int>(1);
    node<int>* ch1=new node<int>(2);
    node<int>* ch2=new node<int>(3);
    root->children.push_back(ch1);
    root->children.push_back(ch2);
    cout<<root->data<<":";
    cout<<root->children[0]->data<<","<<root->children[1]->data;
    return 0;
}