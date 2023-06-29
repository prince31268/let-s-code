#include<bits/stdc++.h>
using namespace std;
bool isPrime_by_Sieve(int n){
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            cout<<i<<" ";
            for(int j=i*2;j<=n;j=j+i)
            prime[j]=false;
        }
    }
}

int main(){
    int n;
    cin>>n;
    isPrime_by_Sieve(n);
}