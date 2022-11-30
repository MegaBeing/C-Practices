#include<bits/stdc++.h>
using namespace std;
class node {
public:
int data;
node *next;
node(int data)
{
    this->data=data;
    next=nullptr; 
}
};
int main()
{   //statically
    node n1(1),n2(2);
    n1.next=&n2;
    cout<<n1.data<<endl<<n2.data<<endl;
    node *head=&n1;
    cout<<head->data<<endl;
    //dynamically
    node *n3 = new node(3);
    node *n4 = new node(4);
    n3->next=n4;
    
    return 0;
}