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
void printlist(node *head){
    if(head==NULL)return ;
    cout<<head->data<<" ";
    for(node *p=head->next; p!=head; p=p->next){
        cout<<p->data<<" ";
    }
}
node *delhead(node *head){
    node *curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next=head->next;
    delete head;
    return curr->next;

}
node *insertend(node *head, int x){
    node *temp=new node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    node *curr=head;
    temp->next=curr->next;
    curr->next=temp;
    int t=temp->data;
    temp->data=curr->data;
    curr->data=t;
    return temp;

}
node *insertbegin(node *head,int x){
    node *temp=new node(x);
    if(head==NULL){
        temp->next=temp;
    }
    else{
        node *curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
    }
    return temp;

}
int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=head;
    head=insertbegin(head,5);
    head=insertend(head,45);
    head=delhead(head);
    printlist(head);

}