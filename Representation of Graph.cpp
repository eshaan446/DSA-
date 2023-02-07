#include <bits/stdc++.h>
using namespace std;

//Representation of Graph in C++
int main(){ 
int n,m; //n=number of node/vertex , m=number of edges
unordered_map<int,list<int>>adj;
cin>>n>>m;
//Now take those each edge as input (take it singularly no need to double write it(it should be one time)
for(int i=1;i<=m;i++){ //1 because the graph was one-based, else it starts with zero
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    //depends whether it is a directed graph or undirected graph
    adj[v].push_back(u);
}
//Now our graph is stored/represented in the adjacency list.
//Now you can go ahead and print it




}
