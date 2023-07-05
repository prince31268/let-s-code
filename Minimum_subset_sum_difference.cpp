#include<bits/stdc++.h>
using namespace std;

vector<int>subset_sum(vector<int> &arr,int range){
    int n=arr.size();
    int dp[n+1][range+1];
    for(int i=0;i<range+1;i++){
        dp[0][i]=0;
    }

    for(int j=0;j<n+1;j++){
        dp[j][0]=1;
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<range+1;j++){
            if(arr[i-1]<=j){
                dp[i][j]=(dp[i-1][j-arr[i-1]] || dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    vector<int>v;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<=range/2;j++){
            if(dp[i][j]==1){
                v.push_back(j);
            }
        }
    }
    return v;
}

int min_Difference(vector<int> &arr){
    int range=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        range+=arr[i];
    }
    vector<int>ans=subset_sum(arr,range);
    int mn=INT_MAX;
    for(int i=0;i<ans.size();i++)
    mn=min(mn,range-(2*ans[i]));
    return mn;
}

int main(){
vector<int>arr={1,2,7};
cout<<min_Difference(arr);
}