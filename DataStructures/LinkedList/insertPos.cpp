#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *next;
    node(int i){
        data=i;
        next=nullptr;
    }
};
void insertlast(node *&head){
    char c;
    cout<<"Do you want to insert node at last[y/n]:\t";
    cin>>c;
    if(c=='y'){
        int data;
        cin>>data;
        if(head==nullptr){
            node *n=new node(data);
            head=n;
        }
        else{
            while(head!=nullptr)
            {
                head=head->next;
            }
            node *n=new node(data);
            head=n;
            return head;
        }
    }
node* insertFirst(node *&head){
    node *hd=head;
    int data;
    cin>>data;
    if(head==nullptr){
        node *n=new node(data);
        head=n;
        return hd;
    }
    else{
        node *n=new node(data);
        n->next=head;
        head=n;
        return hd;
    }
}
}
node* insertPos(node *&head){
    node *orghead=head;
    cout<<"Enter the position:\t";
    int pos;
    cin>>pos;
    if(pos<0){
        cout<<"index not available:\nterminating";
        return orghead;
    }
    if(pos==1){
        orghead=insertFirst(head);
        return orghead;
    }
    if(pos==){
        head=insertlast(head);
        return orghead;
    }
    for(int i=0;i<pos-2;i++){
        if(head->next=nullptr){
            cout<<"Overflow";
            return orghead;
            }
        else head=head->next;
    }
    int data;
    cout<<"Enter Data:\t";
    cin>>data;
    node *n=new node(data);
    n->next=head->next;
    head->next=n;
    return orghead;
}
   
node *getter(){
    int data;
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
    char d;
    cout<<"Do you want to insert node:\t";
    cin>>d;
    if(d=='y')head=insertPos(head);
    cout<<"Printing LL:\n";
    print(head);
}