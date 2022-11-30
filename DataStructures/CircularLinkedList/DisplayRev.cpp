#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *prev;
    node(int i){
        data=i;
        prev=NULL;
        next=NULL;
    }
};
node *getter(){
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data!=-1){
        node *n=new node(data);
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            n->prev=tail;
            tail=n;
        }
        cin>>data;
    }
    tail->next=head;
    head->prev=tail;
    return tail;
}
void printrev(node *head,node *tail){
    while(head!=tail){
        cout<<tail->data<<" ";
        tail=tail->prev;
    }
    cout<<tail->data;
}
void print(node *head,node *tail){
    while(head!=tail){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data;
}
int main(){
    node *tail=getter();
    node *head=tail->next;
    cout<<"Sidha:\n";
    print(head,tail);
    cout<<"\nOlta:\n";
    printrev(head,tail);
}