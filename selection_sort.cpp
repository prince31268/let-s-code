#include<bits/stdc++.h>
using namespace std;
void print_Array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini])
                mini=j;
        }
        swap(arr[mini],arr[i]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int  i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    cout<<"The sorted array is: "<<endl;
    print_Array(arr,n);
}