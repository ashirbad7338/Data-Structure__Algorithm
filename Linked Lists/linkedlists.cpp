#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data= x;
        next=NULL;

    }
};
node *reverse(node *head){
    node *curr=head;
    node *prev=NULL;
    while(curr!=NULL){
        node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    node *head=new node(10);
    node *n1=new node(20);
    node *n2=new node (30);
    head->next=n1;
    n1->next=n2;
    printlist(head);
    head=reverse(head);
    cout<<endl;
    printlist(head);
}