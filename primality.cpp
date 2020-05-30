#include<bits/stdc++.h>
using namespace std;
#define int long long int 
bool prime_test(int n){
    if(n<=1){
        return false;
    }
    else if(n<=3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}
void prime_factor(int n){
    while(n%2==0){
        cout<<2<<" ";
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>2){
        cout<<n<<" ";
    }
}
void prime_no(int n){
    bool prime[n+1];
    for(int i=3;i<=n;i+=2){
        prime[i]=true;
    }
    prime[2]=true;
    for(int i=3;i<=sqrt(n);i+=2){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    cout<<2<<" ";
    int count=0;
    for(int i=3;i<=n;i+=2){
        if(prime[i]){
            count++;
            cout<<i<< " ";
        }
    }
    cout<<endl;
    cout<<count;
}
int32_t main(){
    int n;
    cin>>n;
    bool prime=prime_test(n);
    cout<<prime;
    cout<<endl;
    prime_factor(n);
    cout<<endl;
    prime_no(n);
}