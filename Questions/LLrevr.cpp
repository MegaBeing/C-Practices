#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int i){
        data=i;
        next=nullptr;
    }
    friend void print(Node *&head);
};
Node* takeData(){
    int data;
    cin>>data;
    Node *head=nullptr;
    Node *tail=nullptr;
    Node *temp=nullptr;
    while(data!=-1){
        Node *n=new Node(data);
        if(head==nullptr){
            head=n;
            tail=n;
        }
        else{
            temp=head;
            head=n;
            head->next=temp;
        }
        cin>>data;
    }
    return head;
}
void print(Node *&head){
        while(head!=nullptr){
            cout<<head->data<<"->";
            head=head->next;
        }
        cout<<"Null"<<endl;
    }
int main(){
    Node *head=takeData();
    print(head);
}