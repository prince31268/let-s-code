#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int exponent(int a,int b){
    int result=1;
    while(b>0){
        if(b&1){
            result=(result*1LL*a)%mod;
        }
        a=(a*1LL*a)%mod;
        b=b>>1;
    }
    return result;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<exponent(a,b)<<endl;
}