#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node* next;
    node(int a){
        val=a;
        next=NULL;
    }
};
node* convert(vector<int >v){
    node* head=NULL;
    node* t=NULL;
    for(int i:v){

    if(head==NULL){
        head=new node(i);
        t=head;
    }
    else{
        t->next=new node(i);
        t=t->next;
    }

    }
    return head;
}
void print(node* root){
    while(root!=NULL){
        cout<<root->val;
        root=root->next;
    }
}
node* reverse(node *head){
    node *previous=NULL;
    node *add=NULL;
    node *t=head;
    while(head!=NULL){
        add=head->next;
        head->next=previous;
        previous=head;
        t=head;
        head=add;
    }
    return t;
}
int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10,11,12,200};
    node* head=convert(v);
    print(head);
   node* result= reverse(head);
    cout<<endl;
    print(result);
}