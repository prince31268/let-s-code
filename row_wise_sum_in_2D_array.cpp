#include<bits/stdc++.h>
using  namespace std;
void Print_Sum(int arr[][3],int n,int m){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
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

    Print_Sum(arr,3,3);
}