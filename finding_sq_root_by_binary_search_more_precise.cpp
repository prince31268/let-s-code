#include<bits/stdc++.h>
using namespace std;

long long int binary_search(int n){
    int low=0;
    int high=n;
    int ans=-1;
    while(low<=high){
        long long int mid=low+(high-low)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            high=mid-1;
        }
        else{
            ans=mid;
            low=mid+1;
        }
        mid=low+(high-low)/2;
    }
    return ans;
}

double more_presicion(int n,int presicion,int tempSol){
double factor=1;
double ans=tempSol;
for(int i=0;i<presicion;i++){
    factor=factor/10;
    for(double j=ans;j*j<n;j=j+factor){
        ans=j;
    }
}
return ans;
}


int main(){
    int n;
    cin>>n;
    int tempSol=binary_search(n);
    cout<<"The square root of the given number is: "<<more_presicion(n,4,tempSol)<<endl;
    return 0;
}