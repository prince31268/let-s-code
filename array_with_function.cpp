#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    cout<<"The size of the array is: "<<sizeof(arr)/sizeof(int)<<endl;
}