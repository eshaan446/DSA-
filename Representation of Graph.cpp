#include <bits/stdc++.h>
using namespace std;

//Representation of Graph in C++
int main(){ 
int n,m;
unordered_map<int,list<int>>adj;
cin>>n>>m;
for(int i=1;i<=m;i++){ //1 because the graph was one-based, else it starts with zero
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
//Now our graph is stored/represented in the adjacency list.
//Now you can go ahead and print it




}