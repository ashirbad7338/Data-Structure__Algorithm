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
    if(head==NULL){
        return;
    }
    else{
        cout<<head->data<<" ";
        printlist(head->next);
    }
}
int main(){
    node *head=new node(10);
    node *n1=new node (20);
    node *n2=new node (30);
    head->next=n1;
    n1->next=n2;
    printlist(head);


}