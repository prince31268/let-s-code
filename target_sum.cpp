#include<bits/stdc++.h>
using namespace std;

int count_number_of_subset_with_given_difference(vector<int>& nums,int target){
        int n=nums.size();
        int dp[n+1][target+1];
        for(int i=0;i<target+1;i++){
            dp[0][i]=0;
        }

        for(int j=0;j<n+1;j++){
            dp[j][0]=1;
        }

        for(int i=1;i<n+1;i++){
            for(int j=0;j<target+1;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j-nums[i-1]] +dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][target];
     }
    int findTargetSumWays(vector<int>& nums, int target) {
        target=abs(target);
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }

        int s=(target+sum)/2;
        if(sum<target||(sum+target)%2!=0)
            return 0;
        return count_number_of_subset_with_given_difference(nums,s);
        
    }

    int main(){
        vector<int>nums={1,1,1,1,1};
        int target=3;
        cout<<findTargetSumWays(nums,target)<<endl;
    }