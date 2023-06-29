#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>&boards,int n,int k,int mid){
    int paintersCount=1;
    int boardsPainted=0;
    for(int i=0;i<n;i++){
        if(boardsPainted+boards[i]<=mid){
            boardsPainted+=boards[i];
        }
        else{
            paintersCount++;
            if(paintersCount>k || boards[i]>mid){
                return false;
            }
            boardsPainted=boards[i];
        }
    }
    return true;
}


int painter_Problem(vector<int>&boards,int k){
    int start=0;
    int sum=0;
    int n=boards.size();
    for(int i=0;i<n;i++){
        sum+=boards[i];
    }
    int end=sum;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isPossible(boards,n,k,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    cout<<painter_Problem(v,k);

}