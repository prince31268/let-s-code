#include<bits/stdc++.h>
using namespace std;

int unbounded_knapsack(vector<int> &arr,vector<int> &value,int N){
    int n=arr.size();
    int dp[n+1][N+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<N+1;j++){
            if(i==0 ||j==0){
                dp[i][j]=0;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<N+1;j++){
            if(arr[i-1]<=j){
                dp[i][j]=max(value[i-1]+dp[i][j-arr[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][N];
}

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8};
    vector<int>value={1,5,8,9,10,17,17,20};
    int N=8;
    cout<<unbounded_knapsack(arr,value,N)<<endl;
}