#include<bits/stdc++.h>
using namespace std;
int  compare(pair<int,int >a,pair<int,int>b){
    return a.first<b.first;
}
int main(){
    map<int,int>m;
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int x;
        int no=0;
        cin>>x;
        m.insert(pair<int,int>(x,no));
        m[x]++;
        s.insert(x);
    }
    for(pair<int,int>p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    for(int i:s){
        cout<<i<<" ";
    }
    vector<pair<int,int>>v(m.begin(),m.end());
    sort(v.begin(),v.begin(),compare);
    cout<<endl;
    for(pair<int,int >p:v){
        cout<<p.first<<" "<<p.second<<endl;
    }
}