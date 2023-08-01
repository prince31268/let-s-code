#include<bits/stdc++.h>
using namespace std;

void dfs(int v,vector<int>adj[],vector<int>&vis, vector<int>& ans){
    ans.push_back(v);
    vis[v]=1;
    for(auto child :adj[v]){
        if(!vis[child]){
            vis[child]=1;
            dfs(child,adj,vis,ans);
        }
    }
}




int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int>vis(n,0);
    vector<int>ans;
    dfs(0,adj,vis,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
