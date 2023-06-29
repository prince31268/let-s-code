#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        int dig=n%10;
        if(dig==1){
            ans=(ans+pow(2,i));
        }
            n=n/10;
            i=i+1;
    }
    cout<<ans<<endl;
}