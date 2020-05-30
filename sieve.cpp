#include<bits/stdc++.h>
using namespace std;
#define int long long int
void prime_sieve(int *p){
    for(int i=3;i<=100000;i++){
        p[i]=1;
    }
    for(int i=3;i<=100000;i+=2){
        if(p[i]==1){
            for(int j=i*i;j<=10000;j+=i){
                p[j]=0;
            }
        }
    }
    p[2]=1;
    p[1]=p[0]=0;
}
int32_t main(){
    int n;
    cin>>n;
    int p[100000]={0};
    prime_sieve(p);
    for(int i=0;i<=n;i++){
        if(p[i]==1){
            cout<<i<<" ";
        }
    }
}