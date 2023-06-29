#include<bits/stdc++.h>
using namespace std;

void print_Array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void  array_ele_swap(int arr[],int n){
for(int i=0;i<n;i+=2){
    if(i+1<n){
        swap(arr[i],arr[i+1]);
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
array_ele_swap(arr,n);
print_Array(arr,n);
}