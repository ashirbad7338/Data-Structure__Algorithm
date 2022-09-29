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
void printlist(node *curr){
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
node *delhead(node *head){
    if(head==NULL){
        return NULL;
    }
    else{
        node *temp=head->next;
        free(head);
        return temp;
    }
}
int main(){
    node *head = new node(10);
    node *n1= new node(20);
    node *n2=new node(30);
    head->next=n1;
    n1->next=n2;
    head=delhead(head);
    printlist(head);
}