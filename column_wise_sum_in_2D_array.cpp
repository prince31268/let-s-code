#include<bits/stdc++.h>
using namespace std;

void print_sum(int arr[][3],int n,int m){
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0;i<m;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
}

int main(){
    int arr[3][3]; 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

cout<<"The column-wise sum is: ";
    print_sum(arr,3,3);
}