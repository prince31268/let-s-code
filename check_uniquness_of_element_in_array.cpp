#include<bits/stdc++.h>
using namespace std;

bool isUnique(vector<int> &nums,int n){
    unordered_set<int>st;
    for(int i=0;i<=n;i++){
        if(st.count(nums[i])>0){
            return false;
        }
        st.insert(nums[i]);
    }
    return true;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 3, 6, 7, 8};
    int endIndex = 5;
    bool Unique = isUnique(nums, endIndex);
    if (Unique) {
    cout << "No repeated elements up to index " << endIndex << std::endl;
    } 
    else {
    cout << "Repeated elements found up to index " << endIndex << std::endl;
    }
}