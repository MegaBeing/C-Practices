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
    delAtFirst(head,tail);
    print(head,tail);
}