#include<bits/stdc++.h>
using namespace std;
int sum_of_elements(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The sum of the elements of an array is: "<<sum_of_elements(arr,n)<<endl;
}