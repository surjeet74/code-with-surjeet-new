#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int ,int >mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        mp[a]++;
    }
    for(pair<int,int>p:mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
}