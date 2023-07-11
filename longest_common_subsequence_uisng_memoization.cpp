#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];
int LCS(string s1,string s2,int m,int n){
    if(n==0 || m==0) return 0;
    
    if(dp[m][n]!=-1){
        return dp[m][n];
    }

    if(s1[m-1]==s2[n-1]){
        return dp[m][n]=1+LCS(s1,s2,m-1,n-1);
    }
    else{
        return dp[m][n]=max(LCS(s1,s2,m-1,n),LCS(s1,s2,m,n-1));
    }
}
int main(){
    memset(dp,-1,sizeof(dp));
    string s1="pqrstuvw";
    string s2="pqxyzutw";
    int m=s1.size();
    int n=s2.size();
    cout<<LCS(s1,s2,m,n);
}