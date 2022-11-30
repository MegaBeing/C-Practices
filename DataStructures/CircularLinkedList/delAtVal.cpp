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
void delEle(node *&head,node *&tail){
    node *hd=head;
    cout<<"\nelement:\t";
    int pos;
    cin>>pos;
    while(head->next->data!=pos){
        head=head->next;
    }
    if(head->next==tail){
        head->next=tail->next;
        tail=head;
        head=hd;
    }
    else{
        node *b=head->next;
        head->next=b->next;
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
    print(head,tail);
    delEle(head,tail);
    print(head,tail);
}