#include<bits/stdc++.h>
using namespace std;
#define int long long int 
int32_t main(){
    int n,m;
    set<int>scores;
    vector<int>alice,rank,check;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        scores.insert(x);
    }
    cin>>m;
    vector<int>s(scores.begin(),scores.end());
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        alice.push_back(x);
    }
    
    for(int i:alice){
        s.push_back(i);
        sort(s.begin(),s.end());
        auto it=find(s.begin(),s.end(),i);
        rank.push_back(it-s.begin());
        s.erase(it);
    }
    for(int i:rank){
        cout<<i<<" ";
    }
}