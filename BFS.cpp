#include<bits/stdc++.h>
using namespace std;

vector<int>bfsSearch(int v,vector<int> adj[]){
    vector<int>vis(v,0);
    vis[0]=1;
    queue<int>q;
    q.push(0);
    vector<int>bsf;
    while(!q.empty()){
        int node=q.front();
        q.pop();
         bsf.push_back(node);
        for(auto i: adj[node]){
           
            if(!vis[i]){
                vis[i]=1;
                q.push(i);
            }
        }
    }
    return bsf;
}


int main() {
        int V, E;
        cin >> V >>E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        vector<int> ans = bfsSearch(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }