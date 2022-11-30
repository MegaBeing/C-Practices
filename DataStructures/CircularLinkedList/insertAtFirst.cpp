#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int i){
        data=i;
        next=NULL;
    }
};
void insertAtFirst(node *&head,node *&tail){
    cout<<"\nInput Data for First Pos:\t";
    int data;
    cin>>data;
    if(head==NULL && tail==NULL){
        node *n=new node(data);
        head=n;
    }
    else{
        node *n=new node(data);
        n->next=head;
        head=n;
        tail->next=n;
    }
}
node* getter(){
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
            tail=n;
        }
        cin>>data;
    }
    tail->next=head;
    return tail;
}
void print(node *&head,node *&tail){    
    node *hd=head;
    while(head!=tail){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data;
    head=hd;
}
int main(){
    node *tail=getter();
    node *head=tail->next;
    print(head,tail);
    insertAtFirst(head,tail);
    print(head,tail);
}