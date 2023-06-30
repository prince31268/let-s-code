#include <bits/stdc++.h>

using namespace std;

 // void solve(int i,int j,vector<vector<int>> &m,vector<string> &ans,vector<vector<int>> &vis,string move, int n){
    //     if(i==n-1 && j==n-1){
    //         ans.push_back(move);
    //         return;
    //     }
        
    //     //downward movement
    //     if(i+1<n && !vis[i+1][j] && m[i+1][j]==1){
    //         vis[i][j]=1;
    //         solve(i+1,j,m,ans,vis,move+'D',n);
    //         vis[i][j]=0;
    //     }
        
    //     //left Movement
    //     if(j-1>=0 && !vis[i][j-1] && m[i][j-1]==1){
    //         vis[i][j]=1;
    //         solve(i,j-1,m,ans,vis,move+'L',n);
    //         vis[i][j]=0;
    //     }
        
    //     //Right Movement
    //     if(j+1<n && !vis[i][j+1] && m[i][j+1]==1){
    //         vis[i][j]=1;
    //         solve(i,j+1,m,ans,vis,move+'R',n);
    //         vis[i][j]=0;
    //     }
        
    //     //Upward Movement
    //     if(i-1>=n && !vis[i-1][j] && m[i-1][j]==1){
    //         vis[i][j]=1;
    //         solve(i-1,j,m,ans,vis,move+'U',n);
    //         vis[i][j]=0;
    //     }
    // }
    
    
    //OR
  void solve(int i,int j,vector<vector<int>> &m,vector<string> &ans,vector<vector<int>> &vis,string move, int n,int di[],int dj[]){
        if(i==n-1 && j==n-1){
            ans.push_back(move);
            return;
        }
        
        string dir="DLRU";
        for(int index=0;index<4;index++){
            int nexti=i+di[index];
            int nextj=j+dj[index];
            if(nexti>=0 && nextj>=0 && nexti<n && nextj<n && !vis[nexti][nextj] && m[nexti][nextj]==1){
                vis[i][j]=1;
                solve(nexti,nextj,m,ans,vis,move+dir[index],n,di,dj);
                vis[i][j]=0;
            }
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<vector<int>>vis(n,vector<int>(n,0));
        int di[4]={+1,0,0,-1};
        int dj[4]={0,-1,+1,0};
        if(m[0][0]==1) solve(0,0,m,ans,vis,"",n,di,dj);
        return ans;
    }

int main() {
  int n = 4;

 vector < vector < int >> m = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
   
  vector < string > result = findPath(m, n);
  if (result.size() == 0)
    cout << -1;
  else
    for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
  cout << endl;

  return 0;
}
