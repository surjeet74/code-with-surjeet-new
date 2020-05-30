#include<bits/stdc++.h>
using namespace std;
struct node {
    int val;
    node *right,*left;
    node(int x){
        val=x;
        right=left=NULL;
    }
};
node* insert(node *head,int x){
    if(head==NULL){
        head=new node(x);
    }
    else{
        if(x<head->val){
          head->left=  insert(head->left,x);
        }
        else{
          head->right=  insert(head->right,x);
        }
    }
    return head;
}
int height(node *root){
    if(root==NULL){
        return 1;
    }
    int rightl=height(root->right);
    int leftl=height(root->left);
    return rightl>leftl?rightl+1:leftl+1;
}
void traverse(node *head){
    if(head==NULL){
        return;
    }
    traverse(head->left);
    cout<<head->val<<" ";
    traverse(head->right);
}
node* FindMin(node *root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
node* delete_node(node *root,int val){
    if(root==NULL){
        return root;
    }
    else if(val<root->val){
        root->left=delete_node(root->left,val);
        return root;
    }
    else if(val>root->val){
        root->right=delete_node(root->right,val);
        return root;
    }
    else{
        if(root->left==NULL && root->right==NULL){
            root=NULL;
            
        }
        else if(root->left==NULL){
            node *temp=root;
            root=root->right;
            delete temp;
            
        }
        else if(root->right==NULL){
            node *temp=root;
            root=root->left;
            delete temp;
            
        }
        else {
            node *temp=FindMin(root->right);
            root->val=temp->val;
            root->right=delete_node(root->right,temp->val);
            
        }
        return root;
    }
}
int main(){
    node *root=NULL;
    root=insert(root,40);
    root=insert(root,50);
    root=insert(root,60);
    root=insert(root,45);
    root=insert(root,100);
    traverse(root);
    node *result=delete_node(root,50);
    cout<<endl;
    traverse(result);
    cout<<endl;
    int heightOfTree=height(root);
    cout<<heightOfTree;
   }