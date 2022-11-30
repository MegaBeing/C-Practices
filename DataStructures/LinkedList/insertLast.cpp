#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int i){
        data=i;
        next=nullptr;
    }
};
void insertlast(node *&tail){
    char c;
    cout<<"Do you want to insert node at last[y/n]:\t";
    cin>>c;
    if(c=='y'){
        int data;
        cin>>data;
        if(tail==nullptr){
            node *n=new node(data);
            tail=n;
        }
        else{
            node *n=new node(data);
            tail->next=n;
        }
    }
}
node* getter(){
    int data;
    cout<<"Write your LL:\n";
    cin>>data;
    node *head=nullptr;
    node *tail=nullptr;
    while(data!=-1){
        node *n = new node(data);
        if(head==nullptr){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    insertlast(tail);
    return head;
}
void print(node *&head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    node *head=getter();
    cout<<"printing LL:\n";
    print(head);
    return 0;
}