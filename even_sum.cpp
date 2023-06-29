#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n){
    sum+=i;
    i=i+2;
    }
    cout<<sum;
}
//2 4 6 8 10=> 30