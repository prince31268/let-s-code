#include<bits/stdc++.h>
using namespace std;


void print_Array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void sortOne(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}
int main(){
int n;
cin>>n;
int arr[1000];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sortOne(arr,n);
print_Array(arr,n);
}