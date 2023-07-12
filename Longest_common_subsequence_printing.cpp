#include<bits/stdc++.h>
using namespace std;




// void printLCS(string &a, string &b, int n, int m)
// {
//     vector<vector<int>> dp(n+1, vector<int>(m+1));
//     for(int i=0; i<=n; i++) dp[i][0] = 0;

//     for(int i=1; i<=m; i++) dp[0][i] = 0;
//     string ans = "";
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=m; j++)
//         {
//             if(a[i-1] == b [j-1]) {
//                 dp[i][j] = dp[i-1][j-1] + 1;
//                 ans += a[i-1]; // Adding character to our ans string
//             }
//             else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//         }
//     }
//     cout<<ans<<endl;
// } 




//OR




string longest_common_subsequence_print(string s1,string s2,int m,int n){
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
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
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
            j--;
        }
        else{
            i--;
        }
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    string s1="abcdefgh";
    string s2="abdelfjo";
    cout<<longest_common_subsequence_print(s1,s2,s1.size(),s2.size())<<endl;
}