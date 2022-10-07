#include <iostream>
using namespace std;
struct node {
    int data;
    node *next;
    node(){
        data=NULL;
        next=NULL;
    }
    node(int x){
        data=x;
        next=NULL;
    }
};
bool isloop(node *head){
    node *temp=new node();
    node *curr=head;
    while(curr!=NULL){
        if(curr->next==NULL){
            return false;
        }
        if(curr->next==temp){
            return true;
        }
        node *curr_next=curr->next;
        curr->next=temp;
        curr=curr_next;
    }
    return false;

}
int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=NULL;
    cout<<isloop(head);
}