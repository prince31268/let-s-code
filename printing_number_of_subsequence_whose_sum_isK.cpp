#include<bits/stdc++.h>
using namespace std;

int subsequence_with_sum_k(int arr[],int n,int index,int s,int sum){
    if(s>sum) return 0; //strictly base condition...... If arrays contains positive only
if(index==n){
    if(s==sum){
        return 1;
    }
    else{
        return 0;
    }
}
//picking or taking
int left=subsequence_with_sum_k(arr,n,index+1,s,sum);
s+=arr[index];


//not taking or not taking..........
int right=subsequence_with_sum_k(arr,n,index+1,s,sum);

return left+right;
}

int main(){
int n,sum;
cin>>n>>sum;
int arr[1000];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<subsequence_with_sum_k(arr,n,0,0,sum);
}