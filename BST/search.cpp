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
//Recursive
bool search1(node *root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(root->data>x){
        return search(root->left,x);
    }
    if(root->data<x){
        return search(root->right,x);
    }

}
//Iterative
bool search2(node *root,int x){
    while(root!=NULL){
        if(root->data==x){
            return true;
        }
        else if(root->data>x){
            root=root->left
        }
        else{
            root=root->right;
        }
    }
}
int main(){
    node *root=new node(10);
    root->right=new node(20);
    root->right->left=new node (15);
    root->right->right=new node (30);
    root->left=new node(8);
    root->left->left=new node(5);
    root->left->right=new node(9);
    search1(root,8);
}