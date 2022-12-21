#include <iostream>
using namespace std;
struct node{
    int val;
    node *left;
    node *right;
    node(int x){
        val=x;
        left=right=NULL;
    }

};
bool searchit(node *root,int x){
    if(root==NULL){
        return false;
    }
    while(root!=NULL){
        if(root->val>x){
            root=root->left;
        }
        else if(root->val<x){
            root=root->right;
        }
        else{
            return true;
        }
    }
}
bool searchrec(node *root,int x){
    if(root==NULL){
        return false;
    }
    if(root->val==x){
        return true;
    }
    else if(root->val>x){
        return searchrec(root->left,x);
    }
    else{
        return searchrec(root->right,x);
    }
}
node *insert(node *root,int x){
    node *temp=new node(x);
    node *parent=NULL,*curr=root;
    while(curr!=NULL){
        parent=curr;
        if(curr->val>x)
            curr=curr->left;
        else if(curr->val<x)
            curr=curr->right;
        else
            return root;
    }
    if(parent==NULL)
        return temp;
    if(parent->val>x)
        parent->left=temp;
    else
        parent->right=temp;
    return root;

}

node *max(node *root){
    node *curr=root;
    while(curr->right!=NULL and curr->left!=NULL){
        curr=curr->right;
    }
    return curr;
}
node *min(node *root){
    node *curr=root;
    while(curr->right!=NULL and curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}
node *succ(node *root,int x){
    node *curr=root;
    if(root==NULL){
        return root;
    }
    if(curr->val==x){
        if(curr->right!=NULL){
            return min(curr);
        }
    }
    else if(x<curr->val){
        return succ(curr->left,x);
    }
    else{
        return succ(curr->right,x);
    }
    
}

node *del(node *root,int x){
    if(root==NULL){
        return root;
    }
    if(x<root->val){
        root->left=del(root->left,x);
    }
    else if(x>root->val){
        root->right=del(root->right,x);
    }
    else{
        if (root->left==NULL and root->right==NULL)
            return NULL;
        if(root->left==NULL){
            node *temp=root->right;
            free(root);
            return temp;
        }
        if(root->right==NULL){
            node *temp=root->left;
            free(root);
            return temp;
        }
        node* temp = min(root->right);
        root->val = temp->val;
        root->right = del(root->right, temp->val);
    }
    return root;
}

void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);    
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
    insert(root,25);
    inorder(root);
    cout<<endl;
    cout<<max(root)->val;
    cout<<endl;
    cout<<min(root)->val;
    cout<<endl;
    root=del(root,10);
    inorder(root);
    cout<<endl;
    cout<<searchrec(root,8);
    cout<<endl;
    cout<<searchit(root,30);
    cout<<endl;
    cout<<succ(root,9)->val;

}