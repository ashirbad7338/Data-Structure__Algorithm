#include <iostream>
#include <algorithm>
using namespace std;
struct node {
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
int getmax(node *root){
    if(root==NULL){
        return INT16_MIN;
    }
    else{
        return max(root->data, max(getmax(root->left),getmax(root->right)));
    }
}
int main(){
    node *root=new node(10);
    root->left=new node(5);
    root->right=new node(15);
    root->right->left=new node(20);
    root->right->right=new node(25);
    root->right->right->left=new node(30);
    cout<<getmax(root);
}