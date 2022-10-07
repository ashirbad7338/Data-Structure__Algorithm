#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
node *reversedll(node *head){
    node *temp=NULL;node *curr=head;
    if(head==NULL||head->next==NULL){
        return head;
    }
    while(curr!=NULL){
        temp=curr->prev;
        curr->next=curr->prev;
        curr->next=temp;
        curr=curr->prev;
    }
    return temp->prev;
}
node *delheadll(node *head){
    if(head==NULL)return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        node *temp=head;
        head=head->next;
        head->prev =NULL;
        delete temp;
        return head;
    }
}
node *dellast(node *head){
    if(head==NULL)return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->prev->next=NULL;
    delete curr ;
    return head;

}
node *insertend(node *head,int data){
   node *temp  = new node(data);
   node *curr=head;
   while(curr->next!=NULL){
    curr=curr->next;
   }
   curr->next=temp;
   temp->prev=curr;
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
    node *n1=new node (20);
    node *n2=new node (30);
    head->next=n1;
    n1->prev=head;
    n1->next=n2;
    n2->prev=n1;
    head=insertend(head,40);
    printlist(head);

}
