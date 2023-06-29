#include<bits/stdc++.h>
using namespace std;


// void print_Array(int arr[n][m]){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

bool isPresent(int arr[][3],int target,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to search: ";
    int target;
    cin>>target;
    if(isPresent(arr,target,n,m)){
        cout<<"Element is found. "<<endl;
    }
    else{
        cout<<"Element not Found. "<<endl;
    }
}