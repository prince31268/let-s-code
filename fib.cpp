#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1;
    int sum=0;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}