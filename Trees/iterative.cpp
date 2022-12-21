#include <iostream>
#include <stack>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=right=NULL;
    }
    /* data */
};
void iterativeinorder(node *root){
    stack<node *> st;
    node *curr=root;
    while(curr!=NULL || st.empty()==false){
        while(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        curr=st.top();
        st.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}
void iterativepreorder(node *root){
    if(root==NULL){
        return;
    }
    stack<node *> s;
    s.push(root);
    while(s.empty()==false){
        node *curr=s.top();
        cout<<curr->data<<" ";
        s.pop();
        if(curr->right!=NULL){
            s.push(curr->right);
        }
        if(curr->left!=NULL){
            s.push(curr->left);
        }
    }
}
void iterativepreorder2(node *root){
    if(root==NULL){
        return;
    }
    stack<node *> st;
    node *curr=root;
    while(curr!=NULL || st.empty()==false){
        while(curr!=NULL){
            cout<<curr->data<<" ";
            if(curr->right!=NULL){
                st.push(curr->right);
            }
            curr=curr->left;
        }
       if(st.empty()==false){
        curr=st.top();
        st.pop();
       }
    }
   
}
int main(){
    node *root=new node(10);
    root->right=new node(20);
    root->right->left=new node (30);
    root->left=new node(15);
    root->left->left=new node(5);
    root->left->right=new node(25);
    iterativeinorder(root);
    cout<<endl;
    iterativepreorder(root);
}