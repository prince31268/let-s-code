#include<bits/stdc++.h>
using namespace std;
string lcs(string s1,string s2,int m,int n){
    int dp[m+1][n+1];
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
        }
    }

    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    
    int i=m;
    int j=n;
    string s="";
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            s.push_back(s1[i-1]);
            i--;
            j--;
        }
        else if(dp[i][j-1]>dp[i-1][j]){
            s.push_back(s2[j-1]);
            j--;
        }
        else{
            s.push_back(s1[i-1]);
            i--;
        }
    }

    while(i>0){
        s.push_back(s1[i-1]);
        i--;
    }

    while(j>0){
        s.push_back(s2[j-1]);
        j--;
    }
    reverse(s.begin(),s.end());
    return s;

}

int main(){
    string s1="acbcf";
    string s2="abcdaf";
    int m=s1.size();
    int n=s2.size();
    cout<<lcs(s1,s2,m,n)<<endl;
}