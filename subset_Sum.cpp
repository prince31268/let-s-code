#include<bits/stdc++.h>
using namespace std;


bool subset_sum(vector<int> &arr,int sum){
    int n=arr.size();
    bool dp[n+1][sum+1];

    for(int i=0;i<sum+1;i++){
        dp[0][i]=false;
    }

    for(int j=0;j<n+1;j++){
        dp[j][0]=true;
    }


    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                dp[i][j]=(dp[i-1][j-arr[i-1]] || dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main(){
    vector<int>arr={2,3,7,8,10};
    int sum=25;
    cout<<subset_sum(arr,sum);
}