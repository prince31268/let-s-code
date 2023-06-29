#include<bits/stdc++.h>
using namespace std;
long long int binary_search(int n){
    int low=0;
    int high=n;
    int ans=-1;
    while(low<=high){
        long long int mid=low+(high-low)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            high=mid-1;
        }
        else{
            ans=mid;
            low=mid+1;
        }
        mid=low+(high-low)/2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<"The square root of the given number is: "<<binary_search(n);
}