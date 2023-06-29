#include<bits/stdc++.h>
using namespace std;

int unique_ele(int arr[],int n){
    int  ans=0;
for(int i=0;i<n;i++){
 ans=arr[i]^ans;
}    
return ans;
}



int main(){
int n;
cin>>n;
int arr[1000];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<unique_ele(arr,n)<<" ";
}