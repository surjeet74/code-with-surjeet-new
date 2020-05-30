#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        
        int n=s.length();
        for(int i=2;i<n;i+=2){
            string t1=s.substr(0,i/2);
            string t2=s.substr(i/2,i/2);
            string t3=s.substr(i,(n-i)/2);
            string t4=s.substr((n-i)/2+i,(n-i)/2);
            if(t1==t2 && t3==t4){
                count++;
            }
        }
        cout<<count<<endl;
    }   
}

