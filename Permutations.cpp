// #include <iostream>
// #include <vector>

// using namespace std;

// void solving(vector<int>& ds, vector<int>& nums, vector<vector<int>>& ans, int frequency[]) {
//     if (ds.size() == nums.size()) {
//         ans.push_back(ds);
//         return;
//     }

//     for (int i = 0; i < nums.size(); i++) {
//         if (!frequency[i]) {
//             ds.push_back(nums[i]);
//             frequency[i] = 1;
//             solving(ds, nums, ans, frequency);
//             frequency[i] = 0;
//             ds.pop_back();
//         }
//     }
// }

// vector<vector<int>> permute(vector<int>& nums) {
//     vector<vector<int>> ans;
//     vector<int> ds;
//     int frequency[nums.size()];
//     for (int i = 0; i < nums.size(); i++)
//         frequency[i] = 0;
//     solving(ds, nums, ans, frequency);
//     return ans;
// }

// int main() {
//     vector<int> nums = {1, 2, 3};
//     vector<vector<int>> permutations = permute(nums);

//     // Printing the permutations
//     for (const auto& permutation : permutations) {
//         cout << "[";
//         for (int i = 0; i < permutation.size(); i++) {
//             cout << permutation[i];
//             if (i != permutation.size() - 1)
//                 cout << ", ";
//         }
//         cout << "]" << endl;
//     }

//     return 0;
// }



//OR


#include<bits/stdc++.h>
using namespace std;

void solving(int index,vector<int>& nums,vector<vector<int>> &ans){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            solving(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        solving(0,nums,ans);
        return ans;
}

int main(){
    vector<int>nums={1,2,3};
    vector<vector<int>>permutation=permute(nums);
    for(auto permutations: permutation){
        cout<<"[";
        for(int i=0;i<permutations.size();i++){
            cout<<permutations[i];
            if(i!=permutations.size()-1)
            cout<<", ";
        }
        cout<<"]";
        cout<<endl;
    }
    return 0;
}