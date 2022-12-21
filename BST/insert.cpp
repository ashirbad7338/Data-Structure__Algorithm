#include <iostream>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node (int x){
        data=x;
        left=right=NULL;
    }
};
node *insert1(node *root,int x){
    if(root==NULL){
        node *temp=new node(x);
        return temp;
    }
    else if(root->data>x){
        root->left=insert1(root->left,x);
    }
    else{
        root->right=insert1(root->right,x);
    }
    return root;
}
node *insert2(node *root, int x){
    node *temp=new node(x);
    node *parent=NULL,*curr=root;
    while(curr!=NULL){
        parent=curr;
        if(curr->data>x)
            curr=curr->left;
        else if(curr->data<x)
            curr=curr->right;
        else
            return root;
    }
    if(parent==NULL)
        return temp;
    if(parent->data>x)
        parent->left=temp;
    else
        parent->right=temp;
    return root;
} 
void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);    
    }
} 
int main() {
	
	node *root=new node(10);
	root->left=new node(5);
	root->right=new node(15);
	root->right->left=new node(12);
	root->right->right=new node(18);
	int x=20;
	
	root=insert2(root,x);
	inorder(root);
}