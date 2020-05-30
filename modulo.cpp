#include<bits/stdc++.h>
using namespace std;
int power(int a,int n,int m){
    if(n==0){
        return 1;
    }
    if(n==1){
        return a%m;
    }
    else{
    int result=power(a,n/2,m);
    if(n%2==0){
        return ((result%m)*(result%m))%m;
    }
    else{
        return ((result%m)*(result%m)*a)%m;
    }
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    int m;
    cin>>m;
    int result=power(a,b,m);
    cout<<result;
}