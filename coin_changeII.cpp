#include<bits/stdc++.h>
using namespace std;

int coins_sum_way(vector<int> &coins,int sum){
    int n=coins.size();
    int dp[n+1][sum+1];
    for(int i=0;i<sum+1;i++){
        dp[0][i]=INT_MAX-1;
    }

    for(int j=1;j<n+1;j++){
        dp[j][0]=0;
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(j%coins[0]==0){
            dp[i][j]=j/coins[0];
            }
            else{
                dp[i][j]=INT_MAX-1;
            }
        }
    }

    for(int i=2;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coins[i-1]<=j){
                dp[i][j]=min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main(){
    vector<int> coins={1,2,5};
    int sum=11;
    cout<<coins_sum_way(coins,sum)<<endl;
}




//OR


// #include<bits/stdc++.h>
// using namespace std;

// int coins_sum_way(vector<int> &coins,int sum){
//     int n=coins.size();
//     int dp[n+1][sum+1];
//     for(int i=0;i<sum+1;i++){
//         dp[0][i]=INT_MAX-1;
//     }

//     for(int j=1;j<n+1;j++){
//         dp[j][0]=0;
//     }

//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<sum+1;j++){
//             if(coins[i-1]<=j && dp[i][j-coins[i-1]]!=INT_MAX){
//                 dp[i][j]=min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
//             }
//             else{
//                 dp[i][j]=dp[i-1][j];
//             }
//         }
//     }
//     if(dp[n][sum]!=INT_MAX-1){
//         return dp[n][sum];
//     }
//     else{
//         return -1;
//     }
// }

// int main(){
//     vector<int> coins={1,2,3};
//     int sum=5;
//     cout<<coins_sum_way(coins,sum)<<endl;
// }