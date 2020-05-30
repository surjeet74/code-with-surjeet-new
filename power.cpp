#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int result=power(a,b/2);
    if(b%2==0){
        return result*result;
    }
    else{
        return result*a*result;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    int result=power(a,b);
    cout<<result;
}
