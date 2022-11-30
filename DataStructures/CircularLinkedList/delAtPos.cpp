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
void delAtFirst(node *&head,node *&tail){
    cout<<"\nDo you want to element at First pos[y/n]:\t";
    char d;
    cin>>d;
    if(d=='y'){
        tail->next=head->next;
        head=head->next;
    }
}
void delAtLast(node *&head,node *&tail){
    cout<<"\nDo you want to element at Last pos[y/n]:\t";
    char d;
    cin>>d;
    if(d=='y'){
        node *hd=head;
        while(head->next!=tail){
            head=head->next;
        }
        head->next=hd;
        tail=head;
        head=hd;
    }
}
void delAtPos(node *&head,node *&tail){
    node *hd=head;
    cout<<"\npos at which you want to del an element[-1 for last]:\t";
    int pos;
    cin>>pos;
    if(pos==1){
        delAtFirst(head,tail);
    }
    else if(pos==-1){
        delAtLast(head,tail);
    }
    else{
        for(int i=0;i<pos-2;i++){
            head=head->next;
        }
        head->next=head->next->next;
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
    delAtPos(head,tail);
    print(head,tail);
}