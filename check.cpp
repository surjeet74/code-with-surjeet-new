#include<bits/stdc++.h>
using namespace std;
static int sum=0;
int change(int a[],int n){
    if(n==0){
        return a[n];
    }
    sum=a[n]+change(a,n-1);
    return sum;
}
void reverse(int a[],int low,int high){
    if(low>=high){
        return ;
    }
    else{
        swap(a[low],a[high]);
        reverse(a,low+1,high-1);
    }
   
}
int power(int n,int k){
    if(k==0){
        return 1;
    }
    if(k==1){
        return n;
    }
    else{
        int result=power(n,k/2);
        if(k%2==0){
            return result*result;
        }
        else{
            return result*n*result;
        }
    }
}
int strToInt(string str){
    if(str.length()==1){
        return str[0]-'0';
    }
    int y=strToInt(str.substr(1));
    int x=str[0]-'0';
    x=x*pow(10,str.length()-1)+y;
    return x;
}
void bubble_sort(int a[],int n){
       if(n<2){
            return ;
       }
       else{
           for(int i=0;i<n-1;i++){
               if(a[i]>a[i+1]){
                   swap(a[i],a[i+1]);
               }
               else{
                   continue;
               }
           }
           bubble_sort(a,n-1);
       }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    /*int result=change(a,4);
    reverse(a,0,4);
     for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    int d=3,n=5;
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
    cout<<endl;
     for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    n=2;*/

   // cin>>a>>b;
    //int answer=power(a,b);
   // cout<<answer;
    //string str="1234";
  //  cin>>str;
    //int number=strToInt(str);
   // cout<<number;
   bubble_sort(a,n);
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
}