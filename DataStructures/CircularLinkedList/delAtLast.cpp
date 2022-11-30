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
    delAtLast(head,tail);
    print(head,tail);
}