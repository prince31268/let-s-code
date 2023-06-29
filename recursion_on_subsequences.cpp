#include<bits/stdc++.h>
using namespace std;

void subsequence(vector<int> &nums, int arr[],int n,int index){
    if(index==n){
        for(auto i: nums){
            cout<<i<<" ";
        }
        if(nums.size()==0) cout<<"{}"<<" ";
        cout<<endl;
        return ;
    }


    //Not take the particular element index into the subsequence
    subsequence(nums,arr,n,index+1);


    //Take or pick particular element index into the subsequence
    nums.push_back(arr[index]);
    subsequence(nums,arr,n,index+1);
    nums.pop_back();
}

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>nums;
    subsequence(nums,arr,n,0);

}


//The time complexity of the this alogorith is O(2^n)*n)
//while the space complexity is: O(n)

//Since time complexity is very high this algorithm is not considered to be good enough.....