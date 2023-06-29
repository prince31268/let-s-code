#include<bits/stdc++.h>
using namespace std;
void subsequence_with_sum_k(vector<int> &nums,int arr[],int index, int n,int s,int sum){
    if(index==n){
        if(s==sum){
            for(auto i :nums){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return;
    }
    nums.push_back(arr[index]);
    s+=arr[index];

    //take condition
    subsequence_with_sum_k(nums,arr,index+1,n,s,sum);
    s-=arr[index];
    nums.pop_back();

    //Not take
    subsequence_with_sum_k(nums,arr,index+1,n,s,sum);

}
int main(){
    int n,sum;
    cin>>n>>sum;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>nums;

    subsequence_with_sum_k(nums,arr,0,n,0,sum);
}