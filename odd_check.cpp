#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=1;
    while(num<=n){
        if(num%2!=0){
            cout<<num<<" ";
            num=num+2;
        }
    }
    return 0;
}