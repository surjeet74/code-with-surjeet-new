#include<bits/stdc++.h>
using namespace std;
void primeSieve(int *p,int n){
    p[0]=p[1]=0;
    p[2]=1;
    for(int i=3;i<=n;i+=2){
        p[i]=1;
    }
    for(int i=3;i<=n;i+=2){
        if(p[i]){
            for(int j=i*i;j<=n;j+=i*2){
                p[j]=0;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(p[i]){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[100000]={0};
    primeSieve(a,n);
}