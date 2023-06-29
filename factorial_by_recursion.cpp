#include<bits/stdc++.h>
using namespace std;

int factorial_fun(int n){
    if(n==0) return 1;
    int fact=n*factorial_fun(n-1);
    return fact;
}


int main(){
    int n;
    cin>>n;
    cout<<factorial_fun(n)<<endl;
}