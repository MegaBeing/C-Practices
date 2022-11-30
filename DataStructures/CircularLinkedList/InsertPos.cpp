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
void insertAtLast(node *&head,node *&tail){
    cout<<"\nInput Data for Last Pos:\t";
    int data;
    cin>>data;
    if(head==NULL && tail==NULL){   
        cout<<"UnderFlow";
    }
    else{
        node *n=new node(data);
        n->next=tail->next;
        tail->next=n;
        tail=n;
    }
}
void insertPos(node *&head,node *&tail){
node *hd=head;
cout<<"\nInsertion pos[-1 for lastpos]:\t";
int pos;
cin>>pos;
if(pos==1){
    insertAtFirst(head,tail);
}
else if(pos==-1){
    insertAtLast(head,tail);
}
else{
cout<<"\nInsert data:\t";
int data;
cin>>data;
for(int i=0;i<pos-2;i++){
    head=head->next;
}
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
    insertPos(head,tail);
    print(head,tail);
}