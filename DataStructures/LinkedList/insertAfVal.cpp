#include<bits/stdc++.h>
using namespace std;
class node{
    int data;
    node *next;
    node(int i){
        data=i;
        next=nullptr;
    }
};
void insertAfVal(node *&head){
    cout<<"Enter Value:\t"
    int val;
    cin>>val;
    node *hd=head;
    while(head->data!=val || head!=nullptr){
        head=head->next;
    }
    if(head->data!=val && head==nullptr){
        cout<<"\nValue doesn't exist in the linked list";
        head=hd;
    }
    else{
        cout<<"\nEnter data:\t";
        int data;
        cin>>data;
        node *n=new node(data);
        head->next=n;
        head=hd;
    }   
}
node *getter(){
    int data;
    cin>>data;
    node *head=nullptr;
    node *tail=nullptr;
    while(data!=-1){
        node *n=new node(data);
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
    node *hd=head;
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
node *head=getter();

}