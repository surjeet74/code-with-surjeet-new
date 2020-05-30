#include<bits/stdc++.h>
using namespace std;
void change(int a[],int n){
    if (n==1){
        return ;
    }
    
        for(int j=0;j<n-1;j++){
             if(a[j]>a[j+1]){
                     swap(a[j],a[j+1]);
             }
        }
        change(a,n-1);
    
}
int main(){
    int a[]= {5,4,3,2,1};
    change(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}