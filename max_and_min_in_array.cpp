#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    int maxi=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout<<"The maximum element in the array is :"<<maxi<<endl;


    cout<<"**************"<<endl;

    int mini=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<"The maximum element in the array is :"<<mini<<endl;
}