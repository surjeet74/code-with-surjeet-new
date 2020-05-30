#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node* next;
    node(int x){
         val=x;
         next=NULL;
    }
};
node* parse(vector<int >v){
    node * head=NULL,*store=NULL;
    for(int x:v){
    if(head==NULL){
        head=new node(x);
        store=head;
    }
    else{
        store->next=new node(x);
        store=store->next;
    }
    }
    return head;
}
void view(node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}
node* reverse(node* head){
    node* add=NULL;
    node *iterate,*previous=NULL;
    while(head!=NULL){
        add=head->next;
        head->next=previous;
        previous=head;
        iterate=head;
        head=add;
    }
    return iterate;
}
int main(){
    int n;
    cin>>n;
    vector<int >v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    node* head=parse(v);
    view(head);
    cout<<endl;
    node* rev=reverse(head);
    view(rev);
}
//how to reverse the linked list this is the question 