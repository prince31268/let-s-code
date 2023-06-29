#include<bits/stdc++.h>
using namespace std;

bool subsequence_with_sum_k(vector<int> &nums,int arr[],int n,int index,int s,int sum){
    if(index==n){
        if(s==sum){
            for(auto i: nums){
                cout<<i<<" ";
            }
            cout<<endl;
            return true;
        }
        return false;
    }
    //taking
    nums.push_back(arr[index]);
    s+=arr[index];
    if(subsequence_with_sum_k(nums,arr,n,index+1,s,sum)==true){
        return true;
    }

    s-=arr[index];
    nums.pop_back();
    //Not taking
    if(subsequence_with_sum_k(nums,arr,n,index+1,s,sum)==true){
        return true;
    }
    return false;
}

int main(){
    int n,sum;
    cin>>n>>sum;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>nums;
    subsequence_with_sum_k(nums,arr,n,0,0,sum);
}