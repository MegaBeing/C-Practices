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
void delAtVal(node *&head){
    cout<<"\nEnter val:\t";
    int pos;
    cin>>pos;
    node *hd=head;
    if(head->data==pos){
        head=head->next;
    }
    else{
        while(head->next->data!=pos){
            head=head->next;
        }
        if(head->next->next==nullptr){
            head->next=nullptr;
        }
        else{
            head->next=head->next->next;
        }
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
    delAtVal(head);
    print(head);
}   