#include<bits/stdc++.h>
using namespace std;
int f[51];
vector<int>v;
int fibo(int n){
    if(n<=1){
        return n;
    }
    if(f[n]!=-1){
        int a=f[n];
        v.push_back(a);
        return a;
    }
    else{
    f[n] =fibo(n-1)+fibo(n-2);
     v.push_back(f[n]);
    return f[n];
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<51;i++){
        f[i]=-1;
    }
    int result=fibo(n);
    cout<<result;
    cout<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}