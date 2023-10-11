#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums){
    int sum=0;
    int maxi=nums[0];
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}

int main(){
    vector<int>nums={-1,3,4,-2,5,-7};
    cout<<maxSubArray(nums)<<endl;
}