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
};
int getsize(node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return 1+getsize(root->left)+getsize(root->right);
    }
}
int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->left->left=new node(15);
    cout<<getsize(root);
}