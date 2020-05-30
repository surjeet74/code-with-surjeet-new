#include<bits/stdc++.h>
using namespace std;
void prime(int b[],int n){

    b[0]=b[1]=0;
    b[2]=1;
    for(int i=3;i<n;i+=2){
        b[i]=1;
    }
    for(int i=3;i<=n;i++){
        for(int j=i*i;j<i;j+=2*i){
            if(b[i]){
                b[i]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(b[i]){
            cout<<i<<" ";
        }
    }
}
int main(){
    int a[100000];
    prime(a,100);
}