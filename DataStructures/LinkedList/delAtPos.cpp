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
void delAtFirst(node *&head){
    cout<<"\nDo you want to del the first element of the Linked List[y/n]:\t";
    char c;
    cin>>c;
    if(c=='y'){
        head=head->next;
    }
}
void delAtPos(node *&head){
    cout<<"\nposition for deletion[-1 for last]:\t";
    int pos;
    cin>>pos;
    node *hd=head;
    if(pos==1){
        delAtFirst(head);
    }
    else if(pos==-1){
        delAtLast(head);
    }
    else{
        for(int i=0;i<pos-2;i++){
            head=head->next;
        }
        head->next=head->next->next;
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
    delAtPos(head);
    print(head);
}