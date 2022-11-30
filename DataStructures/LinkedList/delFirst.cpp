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
void delAtFirst(node *&head){
    cout<<"\nDo you want to del the first element of the Linked List[y/n]:\t";
    char c;
    cin>>c;
    if(c=='y'){
        head=head->next;
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
    delAtFirst(head);
    print(head);
}