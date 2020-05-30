#include<bits/stdc++.h>
using namespace std;
vector<int>v1,v2;
int bin_search(int a[],int low,int high,int element){
    int result=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==element){
            result=mid;
            return result;
        }
        else if(element<a[mid]){
            
        int a1= bin_search(a,low,mid-1,element);
        v1.push_back(a1);
        return a1;
        }
        else{
            int b= bin_search(a,mid+1,high,element);
            v2.push_back(b);
            return b;
        }
    }
    return result;
}
int main(){
    int a[]={1,2,3,4,5,6};
    int result=bin_search(a,0,5,4);
    cout<<result<<endl;
    for(int i:v1){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i:v2){
    cout<<i<< " ";
    }
}