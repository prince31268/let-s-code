#include<bits/stdc++.h>
using namespace std;

int pivot(int arr[],int n){
int low=0;
int high=n-1;
int mid=low+(high-low)/2;
while(low<high){
    if(arr[mid]>=arr[0]){
        low=mid+1;
    }
    else{
        high=mid;
    }
    mid=low+(high-low)/2;
}
return low;
}

int main(){
    int arr[5]={3,8,10,17,1};
    cout<<"The pivot element is at index: "<<pivot(arr,5)<<endl;
}