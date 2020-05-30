#include<bits/stdc++.h>
using namespace std;
// index stores the index of the current node 
// start and end are the range elements 
void buildTree(int *tree,int *a,int index,int s,int e){
   if(s==e){
       tree[index]=a[s];
       return ;
   }
   if(s>e){
       return ;
   }
   // recursive case 
   int mid=(s+e)/2;
   // build left subTree
   buildTree(tree,a,2*index,s,mid);
   // build right subTree
   buildTree(tree,a,2*index+1,mid+1,e);
   int left=tree[2*index];
   int right=tree[2*index+1];
   tree[index]=min(left,right);
}
int query(int *tree,int index,int s,int e,int qs,int qe){
    if(qe<s && qs>e){
        return INT_MAX;
    }
    else if(s<=qs && e<=qe){
        return tree[index];
    }
    else{

    }
}
int main(){
    int a[]={1,2,0,3};
    int n=sizeof(a)/sizeof(int);
    int *tree=new int[4*n+1];
    buildTree(tree,a,1,0,n-1);
    for(int i=1;i<=7;i++){
        cout<<tree[i]<<" ";
    }
}

