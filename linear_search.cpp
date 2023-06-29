#include<bits/stdc++.h>
using namespace std;

int  search(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k) return i;;
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
    cout<<"Enter the number to search"<<endl;
    int k;
    cin>>k;

    cout<<search(arr,n,k);

    
}