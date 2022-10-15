#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node (int x){
        data=x;
        next=NULL;
    }
};
struct stack{
    node *head;
    int sz;
    stack(){
        head=NULL;
        sz=0;
    }
    void push(int x){
        node *temp=new node(x);
        temp->next=head;
        head=temp;
        sz++;
    }
    int pop(){
        if(head==NULL){return INT16_MAX;}
        int res =head->data;
        node *temp=head;
        head=head->next;
        delete(temp);
        sz--;
        return res;
    }
    int size(){return sz;}
    int peek(){
        if(head==NULL) 
            return INT16_MAX;
        else{
            return head->data;
        }
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(30);
    s.push(50);
    cout<<s.peek();
}