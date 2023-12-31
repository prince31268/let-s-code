#include<bits/stdc++.h>
using namespace std;

int lcs(string &s1,string &s2){
    int m=s1.size();
    int n=s2.size();
    int dp[m+1][n+1];

    for(int i=0;i<m+1;i++) dp[i][0]=0;
    for(int j=0;j<n+1;j++) dp[0][j]=0;

    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}

int lps(string s){
    string t=s;
    reverse(t.begin(),t.end());
    return lcs(s,t);
}

int main(){
    string s="aebcbda";
    cout<< s.size()-lps(s)<<endl;
}