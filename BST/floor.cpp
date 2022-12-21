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
int floor(node *root,int x){
    while(root->left!=NULL || root->right!=NULL){
        if(root->data==x){
            return true;
        }
        else if(root->data>x){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return root->data;

}
int main() {
	
	node *root=new node(10);
	root->left=new node(5);
	root->right=new node(15);
	root->right->left=new node(12);
	root->right->right=new node(18);
    cout<<floor(root,16);
	
}