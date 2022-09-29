#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
        // node(int x){
        //     data=x;
        //     next=NULL;
        // }
};
void insert(node *head, int x){
    node *temp=new node();
    temp->data=x;
    temp->next=NULL;
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
}
void printlist(node *curr){
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
void deltail(node *head){
    node *temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    (temp-1)->next=NULL;
    free(temp);
}
int main(){
    int n,x;
    node *head=new node();
    head->data=10;
    head->next=NULL;
    cout<<"1. Insertion\n2. Deletion\n3. Print\n4. Exit\n";
    do {
    cout<<"Enter your choice - ";
    cin>>n;
        switch(n) {
            case 1: {
                        cin>>x;
                        insert(head,x); 
                    }   
                    break;
            case 2: deltail(head);
                    break;
            case 3: printlist(head);
                        cout<<endl;
                    break;
            default: cout<<"!!Wrong Choice";
        }
    }while(n!=4);
}
