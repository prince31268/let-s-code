#include<bits/stdc++.h>
using namespace std;

int main(){

    // //Adjacency Matrix Method
    // int m,n;
    //cin>>m>>n
    // // m is the number of the edges 
    // //n is the number of the nodes
    // int adj[n+1][m+1];
    // for(int i=0;i<m;i++){
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u][v]=1;
    //     adj[v][u]=1;
    // }


    //Adjacency List Method of storing the nodes of the graph

    int m,n;
    cin>>m>>n;
    //m is the number of edges;
    //n is the number of the nodes;

    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}