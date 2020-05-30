#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int s=sizeof(a)/sizeof(a[0]);
        sort(a,a+s);
        int diff=0;
        int max=INT_MAX;
        for(int i=0;i<n-1;i++){
            diff=a[i+1]-a[i];
              if(max>=diff){
                  max=diff;
              }
        }
        cout<<max<<endl;
    }
}