#include<bits/stdc++.h>
using namespace std;

//int dp[1001][1001];
int knapsack(vector<int> &weight,vector<int> &price,int W){
    int n=weight.size();
    vector<vector<int>>dp(n+1,vector<int>(W+1,0));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            if(i==0 || j==0){
                 dp[i][j]=0;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
             if(weight[i-1]<=j){
                dp[i][j]=max(price[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}

int main(){
    //memset(dp,-1,sizeof(dp));
    vector<int>weight={3,5,6,7};
    vector<int>value={2,4,12,14};
    int n=weight.size();
    int W=11;
    cout<<knapsack(weight,value,W);
}