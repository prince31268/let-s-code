#include<bits/stdc++.h>
using namespace std;

 void combination(int index,vector<int>& candidates, int target,vector<vector<int>>&ans,vector<int>&data_structure){
        if(index==candidates.size()){
            if(target==0){
                ans.push_back(data_structure);
            }
            return ;
        }

        if(candidates[index]<=target){
            data_structure.push_back(candidates[index]);
            combination(index,candidates,target-candidates[index],ans,data_structure);
            data_structure.pop_back();
        }
        combination(index+1,candidates,target,ans,data_structure);
    }

int main() {
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans;
    vector<int> data_structures;
    
    combination(0, candidates,target,ans, data_structures);
    
    // Printing the resulting combinations
    for (const auto& combination : ans) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}