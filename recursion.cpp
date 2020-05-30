#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            v.push_back(pair<int ,int>(a,b));
        }
        vector<int>v1(5,0);
        for(pair<int ,int>p:v){
            v1[p.first]++;
            v1[p.second+1]--;
        }
        int sum=0;
        for(int a:v1){
            sum=sum+a;
            cout<<sum<<" ";
        }

    }
}
