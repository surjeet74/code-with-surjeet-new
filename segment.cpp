#include<bits/stdc++.h>
using namespace std;
void buildTree(int *tree,int *a,int index,int s,int e){
     if(s>e){
         return ;
     }
     if(s==e){
         tree[index]=a[s];
         return;
     }
     int mid=(s+e)/2;
     buildTree(tree,a,2*index,0,mid);
     buildTree(tree,a,2*index+1,mid+1,e);
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int *tree=new int[4*n+1];

}