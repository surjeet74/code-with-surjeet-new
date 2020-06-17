#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
    map<T,list<T>>adjList;
    public:
    void addEdge(T u,T v,bool bidir=true){
        adjList[u].push_back(v);
        if(bidir){
            adjList[v].push_back(u);
        }
    }
    void print(){
        for(auto element:adjList){
            cout<<element.first<<"->";
            for(T node:element.second){
                cout<<node<<",";
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph<string> g;
    g.addEdge("Amritsar","Delhhi");
    g.addEdge("Amritsar","Jaipur");
    g.addEdge("Delhi","Siachin");
    g.addEdge("Delhi","Bangalore");
    g.addEdge("Delhi","Amritsar");
    g.print();
}