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
    return head;
}
node* insertFirst(node *&head){
    int data;
    cin>>data;
    if(head==nullptr){
        node *n=new node(data);
        head=n;
        return head;
    }
    else{
        node *n=new node(data);
        n->next=head;
        head=n;
        return head;
    }
}
void print(node *&head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    node *head=getter();
    char n;
    cout<<"Do you want to insert a new node at first pos [y/n]:\t";
    cin>>n;
    if(n=='y')insertFirst(head);
    cout<<"printing LL:\n";
    print(head);
    return 0;
}