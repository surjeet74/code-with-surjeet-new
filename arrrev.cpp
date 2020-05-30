#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int start ,int end){
   if(start>=end){
       return ;
   }
      int temp=a[start];
      a[start]=a[end];
      a[end]=temp;
      reverse(a,start+1,end-1);
}
void arrrev(int a[],int d,int n){
    if(d==0){
        return ;
    }
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n,d;
    cin>>n>>d;
    int a[n];
    if(d>n){
        d=d%n;
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    arrrev(a,d,n);
   

}