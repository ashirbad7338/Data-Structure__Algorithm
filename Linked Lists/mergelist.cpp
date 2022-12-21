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
node *sortedlist(node *a,node *b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    node *head=NULL;
    node *tail=NULL;
    if(a->data<=b->data){
        head=tail=a;
        a=a->next;
    }
    else{
        head=tail=b;
        b=b->next;
    }
    while(a!=NULL and b!=NULL){
        if(a->data<=b->data){
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else{
            tail->next=b;
            tail=b;
            b=b->next;
        }
    }
    if(a==NULL){
        tail->next=b;
    }
    else{
        tail->next=a;
    }
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