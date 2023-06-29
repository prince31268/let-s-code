#include<bits/stdc++.h>
using namespace std;
int firstOccur(int arr[],int n,int k){
        int left=0,right=n-1,ans=-1;
        int mid=left+(right-left)/2;
        while(left<=right){
            if(arr[mid]==k){
               ans=mid;
               right=mid-1;
            }
            else if(k>arr[mid]){
                left=mid+1;
            }
            else if(k<arr[mid]){
                right=mid-1;
            }
            mid=left+(right-left)/2;
        }
       return ans;
 }

int lastOccur(int arr[],int n,int k){
        int left=0,right=n-1,ans=-1;
        int mid=left+(right-left)/2;
        while(left<=right){
            if(arr[mid]==k){
               ans=mid;
               left=mid+1;
            }
         else if(k>arr[mid]){
                left=mid+1;
            }
            else if(k<arr[mid]){
                right=mid-1;
            }
            mid=left+(right-left)/2;
        }
       return ans;
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
    cout<<"Enter the element whose occurance is to be checked:" <<endl;
    cout<<"The first occurance of target is at index: "<<firstOccur(arr,n,k)<<endl;
    cout<<"The last occurance of target is at index: "<<lastOccur(arr,n,k)<<endl;
    return 0;
}