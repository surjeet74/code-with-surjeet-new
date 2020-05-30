#include<bits/stdc++.h>
using namespace std;
int product(int a[],int n){
    int result=1;
    vector<int>v;
    for(int index=0;index<n;index++){
            for(int j=index;j<n;j++){
                result=result*a[j];
               v.push_back(a[j]);
            }
    }
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    return result;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   int result= product(a,n);
   cout<<result;
}