#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void subSetSum(int index, vector<int>& ds, vector<int>& nums, vector<vector<int>>& ans) {
    ans.push_back(ds);
    for (int i = index; i < nums.size(); i++) {
        if (i != index && nums[i] == nums[i - 1])
            continue;
        ds.push_back(nums[i]);
        subSetSum(i + 1, ds, nums, ans);
        ds.pop_back();
    }
}

int main() {
    vector<int> nums = {1,2,2};
    vector<vector<int>> ans;
    vector<int> ds;
    
    // Sort the input array
    sort(nums.begin(), nums.end());
    
    subSetSum(0, ds, nums, ans);
    
    // Printing the subsets
    for (auto subset : ans) {
        cout << "[";
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i != subset.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }
    
    return 0;
}
