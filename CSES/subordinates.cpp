#include <iostream>
#include <vector>
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
int inorder(node *temp){
    if(temp==NULL){
        return 0;
    }
       return 1+ inorder(temp->left)+inorder(temp->right);
}
int nodes(node *root,int x){
    node *curr=root;
    while(curr->data!=x and curr->left!=NULL and curr->right!=NULL){
        if(curr->left!=NULL){
            curr=curr->left;
        }
        else{
            curr=curr->right;
        }
    }
    return inorder(curr)-1;
    
}
vector<int> sub(node *root,int x){
    node *temp=root;
    vector<int> v;
    for(int i=0; i<x; i++){
        v.push_back(nodes(temp,i+1));
    }
    return v;
}
void insert(node *root,int x,int y){
    node *curr=root;
    while ( curr->data!=y)
    {
    while(curr->left!=NULL and curr->right!=NULL ){
        if(curr->left!=NULL){
            curr=curr->left;
        }
        else{
            curr=curr->right;
        }
    }
    if(curr->left==NULL){
        curr->left=new node(x);
    }
    else{
        curr->right=new node(x);
    }
}}
void preorder(node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n-1];
    for(int i=0; i<n-1; i++){
        cin>>a[i];
    }
    node *root=new node(1);
    for(int i=0; i<n-1; i++){
        insert(root,i+2,a[i]);
    }
    // cout<<inorder(root);
    // vector<int> b=sub(root,n);
    // for(int i=0; i<b.size(); i++){
    //     cout<<a[i]<<" ";
    // }
    preorder(root);
}