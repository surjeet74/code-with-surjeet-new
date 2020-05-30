#include<bits/stdc++.h>
using namespace std;
#define int long long int 
#define fo(i,n) for(int i=1;i<=n;i++)
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>n>>m;
        map<int,int>mp;
        vector<int>v;
        fo(i,n){
            mp.insert(pair<int,int>(i,0));
        }
        fo(i,m){
            int x;
            cin>>x;
            mp[x]++;
        }
        vector<int>chef,assist;
        int count=1;
        for(pair<int,int>p:mp){
            if(p.second==1){
                continue;
            }
            else{
                if(count==1){
                chef.push_back(p.first);
                count=0;
                }
                else if(count==0){
                    assist.push_back(p.first);
                    count=1;
                }

            
                
            }
        }
        for(int x:chef){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int x:assist){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}