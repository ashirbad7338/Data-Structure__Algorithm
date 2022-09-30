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
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
void insertpos(node *head,int pos, int data){
    node *curr=head;
    int n=pos-2;
    while(n--){
        curr=curr->next;
    }
    node *temp=new node(data);
    temp->next=curr->next;
    curr->next=temp;
}
int main(){
    node *head=new node(10);
    node *n1=new node(20);
    node *n2=new node (30);
    node *n3=new node (40);
    node *n4=new node (50);
    head->next=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    insertpos(head, 3,34);
    printlist(head);

}