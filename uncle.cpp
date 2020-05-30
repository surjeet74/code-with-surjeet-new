#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int k;
        cin>>k;
        int element =v[k-1];
        sort(v.begin(),v.end());
        auto it= find(v.begin(),v.end(),element);
        cout<<it-v.begin()+1<<endl;
    }
}