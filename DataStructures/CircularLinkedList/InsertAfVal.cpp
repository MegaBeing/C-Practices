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
void insertAfVal(node *&head,node *&tail){
node *hd=head;
cout<<"\nInsert The value:\t";
int pos;
cin>>pos;
cout<<"\nInsert the Data:\t";
int data;
cin>>data;
while(head->data!=pos){
    head=head->next;
}
if(head==tail){
    node *n=new node(data);
    n->next=head->next;
    head->next=n;
    tail=n;
    head=hd;
}
    else{
    node *n=new node(data);
    n->next=head->next;
    head->next=n;
    head=hd;
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
    while(head!=tail){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data;
}
int main(){
    node *tail=getter();
    node *head=tail->next;
    insertAfVal(head,tail);
    print(head,tail);
}