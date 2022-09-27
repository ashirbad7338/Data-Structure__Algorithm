#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node *insertend(node *head, int x){
    node *temp=new node(x);
    if(head==NULL){
        return temp;
    }
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
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
    insertend(head,45);
    insertend(head,65);
    printlist(head);   
}
