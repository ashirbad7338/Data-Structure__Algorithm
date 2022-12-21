#include <iostream>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=right=NULL;
    }
}
bool issum(node *root){
    if(root==NULL){
        return true;
    }
    if(root->left==NULL and root->right==NULL){
        return true;
    }
    int sum=0;
    if(root->left!=NULL){
        sum += root->left->data;
    }
    if(root->right!=NULL){
        sum += root->right->data;
    }
    return(root->data==sum and issum(root->left) and issum(root->right));
}