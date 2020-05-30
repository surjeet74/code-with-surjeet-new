#include<bits/stdc++.h>
using namespace std;
#define int long long int 
#define fo(i,n) for(int i=1;i<=n;i++)
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int g;
        cin>>g;
        while(g--){
            int i,n,q,count=0,head=0,tail=0;
            cin>>i>>n>>q;
            for(int x=1;x<=n;x++){
              if(x%2==0){
                  head++;
              }
              else{
                  tail++;
              }
            }
            if(i==2){
                int temp;
                temp=head;
                head=tail;
                tail=temp;
            }
            if(q==1){
                cout<<head<<endl;
            }
            else
            {
                 cout<<tail<<endl;
            }
            
            
        }
    }
}