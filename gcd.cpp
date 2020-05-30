#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b){
    if(b==0){
        return a;
    }
   return hcf(b,b%a);
}
int mode(string a,int b){
    int m=0;
    for(int i=0;i<a.length();i++){
        m=(m*10+a[i]-'0')%b;
    }
    return m;
}
int main(){
    int a,b;
    cin>>a>>b;
    int gcd=hcf(a,b);
    cout<<gcd;
    cout<<endl;
    cout<<mode("123",b);
}