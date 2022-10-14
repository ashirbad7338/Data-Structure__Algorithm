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
void printklevel(node *root,int k){
    if(root==NULL){
        return ;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    else{
        printklevel(root->left,k-1);
        printklevel(root->right,k-1);
    }
}
int main(){
    node *root=new node(10);
    root->left=new node(5);
    root->right=new node(15);
    root->right->left=new node(20);
    root->right->right=new node(25);
    root->right->right->left=new node(30);
    printklevel(root,2);
}