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
void delAtLast(node *&head){
    cout<<"\nDo you want to del the Last element of the Linked List[y/n]:\t";
    char c;
    cin>>c;
    node *hd=head;
    if(c=='y'){
        while(head->next->next!=nullptr){
            head=head->next;
        }
        head->next=nullptr;
        head=hd;
    }
}
void print(node *head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }

}
int main(){
    node *head=getter();
    print(head);
    delAtLast(head);
    print(head);
}