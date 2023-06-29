#include<bits/stdc++.h>
using namespace std;

void getMax(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
         cout<<"The maximum number in the array is: "<<maxi<<endl;
}


int  getMin(int arr[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    return mini;
}

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getMax(arr,n);
    cout<<"The minimum number in the array is:"<<getMin(arr,n)<<endl;
}