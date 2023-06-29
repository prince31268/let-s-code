#include<bits/stdc++.h>
using namespace std;

int binary_searching(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=low+(high-low)/2;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the element to search:"<<endl;
    cin>>k;
int ans=binary_searching(arr,n,k);
cout<<"Index of k is:"<<ans;

}