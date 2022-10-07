#include <iostream>
using namespace std;
struct node {
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node *sinsert(node *head,int x){
    node *temp= new node(x);
    if(head==NULL){
        return temp;
    }
    if(x<head->data){
        temp->next=head;
        return temp;
    }
    node *curr=head;
    while(curr->next!=NULL and curr->next->data<x){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
void printmid(node *head){
    node *hare=head; 
    node *tort=head;
    while(hare!=NULL and hare->next!=NULL){
        tort=tort->next;
        hare=hare->next->next;
    }
    cout<<tort->data;
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
    n1->next=n2;
    printlist(head);
    cout<<endl;
    printmid(head);

}