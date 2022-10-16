#include <iostream>
#include <queue>
using namespace std;
struct node {
    int data;
    node *left;
    node *right;
    node (int x){
        data=x;
        left=right=NULL;
    } 
};
int maxlevel=0;
//Recursive function//
void printleft1(node *root,int level){
    if(root==NULL){
        return;
    }
    if(maxlevel<level){
        cout<<root->data<<" ";
        maxlevel=level;
    }
    printleft1(root->left,level+1);
    printleft1(root->right,level+1);
}
//Iterative function
void printleft2(node *root,int main){
    cout<<endl;
    if(root==NULL){
        return;
    }
    queue<node *> q;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        for(int i=0; i<count; i++){
            node *curr=q.front();
            q.pop();
            if(i==0){
                cout<<curr->data<<" ";
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
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
    printleft1(root,1);
    printleft2(root,1);
}