#include<bits/stdc++.h>
using namespace std;

void print_Array(vector<int> nums,int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

void moveZeroes(vector<int>& nums) {
int i=0;
for(int j=0;j<nums.size();j++){
    if(nums[j]!=0){
        swap(nums[j],nums[i]);
        i++;
    }
}
}

int main(){
int n;
cin>>n;
vector<int> nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
moveZeroes(nums);
print_Array(nums,n);
}