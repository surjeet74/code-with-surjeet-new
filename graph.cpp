#include<bits/stdc++.h>
using namespace std;
// grpah implementation with surjeet ->
class Graph{
    int v;
    list<int> *adjList;
    public: 
    Graph(int node){
        v=node;
        adjList=new list<int>[v];
    }
    void addEdge(int u,int v,bool bidir=false){
        adjList[u].push_back(v);
        if(bidir){
            adjList[v].push_back(u);
        }
    }
    void print(){
        for(int i=0;i<v;i++){
            cout<<i<<"->";
            for(int node:adjList[i]){
                cout<<node<<",";
            }
            cout<<endl;
        }
    }
    void bfs(int src,int destination){
        queue<int>q;
        q.push(src);
        bool *visited=new bool[v]{0};
        int *distance=new int[v]{0};
        int *parent=new int[v];
        for(int i=0;i<v;i++){
            parent[i]=-1;
        }
        visited[src]=true;
        while(!q.empty()){
            int node=q.front();
            cout<<node<<" ";
            q.pop();
            for(int neighbour:adjList[node]){
                if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour]=true;
                distance[neighbour]=distance[node]+1;
                parent[neighbour]=node;
                }
            }
        }
        cout<<endl;
        for(int i=0;i<v;i++){
            cout<<"node "<<i<<" is having the distance from source "<<distance[i]<<endl;
        }
        int temp=destination;
        while(temp!=-1){
            cout<<temp<<"<-- ";
            temp=parent[temp];
        }
    }
};
int main(){
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,4);
    g.addEdge(2,4);
    g.addEdge(3,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(3,4);
   // g.print();
   g.bfs(0,5);
}
