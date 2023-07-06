#include<bits/stdc++.h>
using namespace std;

int count_subset_for_given_sum(vector<int> &arr,int sum){
    int n=arr.size();
    int dp[n+1][sum+1];
    for(int i=0;i<sum+1;i++){
        dp[0][i]=0;
    }

    for(int j=0;j<n+1;j++){
        dp[j][0]=1;
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                dp[i][j]=(dp[i-1][j-arr[i-1]] + dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int subset_sum_with_given_difference(vector<int> &arr,int difference){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    int s=(difference+sum)/2;
    return count_subset_for_given_sum(arr,s);
}

int main(){
    vector<int> arr={1,2,1,3};
    int difference=1;
    cout<<subset_sum_with_given_difference(arr,difference)<<endl;
}