#include<bits/stdc++.h>
using namespace std;
void print_Array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reversing(int left,int right,int arr[]){
    if(left>=right) return;
    swap(arr[left],arr[right]);
    reversing(left+1,right-1,arr);
}



//Reversing array using single argument as base condition
void reversing_array(int arr[],int i,int n){
    if(i>=n/2) return ;
    swap(arr[i],arr[n-i-1]);
    reversing_array(arr,i+1,n);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversing(0,n-1,arr);
    print_Array(arr,n);
    reversing_array(arr,0,n);
    print_Array(arr,n);
}