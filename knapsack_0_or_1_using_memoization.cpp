#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];
int knapsack(vector<int> &weight,vector<int> &value,int W,int n){
    if(n==0 || W==0) return 0;

    if(dp[n][W]!=-1){
        return dp[n][W];
    }

    if(weight[n-1]<=W){
        return dp[n][W]=max((value[n-1]+knapsack(weight,value,W-weight[n-1],n-1)),knapsack(weight,value,W,n-1));
    }
    else{
        return dp[n][W]=knapsack(weight,value,W,n-1);
    }
}


int main(){
    memset(dp,-1,sizeof(dp));
    vector<int>weight={1,3,4,5};
    vector<int>value={1,4,5,7};
    int n=weight.size();
    int W=7;
    cout<<knapsack(weight,value,W,n);
}