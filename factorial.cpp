#include<bits./stdc++.h>
using namespace std;
int power(int n,int x){
    if(x==1){
        return n;
    }
    return n*power(n,x-1);
}
int main(){
    int n,x;
    cin>>n>>x;
    int result=power(n,x);
    cout<<result;
}