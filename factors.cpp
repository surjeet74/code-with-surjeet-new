#include<bits/stdc++.h>
using namespace std;
void factors(int n){
    /*cout<<1<<" ";
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int a=n/i;
            cout<<i<<" "<<a<<" ";
        }
    }
    cout<<n;*/
    int a=n;
    if(n%2==0){
        while(n%2==0){
            cout<<2<<" ";
            n=n/2;
        }
    }
    for(int i=3;i<=sqrt(a);i+=2){
            while(n%i==0){
                cout<<i<<" ";
                n=n/i;
            }
    }
}
int main(){
    int n;
    cin>>n;
    factors(n);
}