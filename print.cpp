#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int stringToInt(string str){
    if(str.length()==1){
        return str[0]-'0';
    }
    int y=stringToInt(str.substr(1));
    int x=str[0]-'0';
    v.push_back(x);
    x=x*pow(10,str.length()-1)+y;
    return x;
}
int main(){
    string str="1234";
    int result=stringToInt(str);
    cout<<result;
    cout<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}