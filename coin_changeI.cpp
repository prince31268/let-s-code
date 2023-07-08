#include<bits/stdc++.h>
using namespace std;

int count_of_ways(vector<int> &coins,int sum){
    int n=coins.size();
    int dp[n+1][sum+1];
    // for(int i=0;i<n+1;i++){
    //     for(int j=0;j<sum+1;j++){
    //         if(i==0){
    //             dp[i][j]=0;
    //         }
    //         if(j==0){
    //             dp[i][j]=1;
    //         }
    //     }
    // }

    for(int i=0;i<sum+1;i++){
        dp[0][i]=0;
    }

    for(int j=0;j<n+1;j++){
        dp[j][0]=1;
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coins[i-1]<=j){
                dp[i][j]=dp[i][j-coins[i-1]] +dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main(){
    vector<int> coins={1,2,3};
    int sum=5;
    cout<<count_of_ways(coins,sum)<<endl;
}



