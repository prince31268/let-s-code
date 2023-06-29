#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int num=2;
    // while(num<n){
    //     if(n%num==0){
    //         cout<<"NOT PRIME for: "<<num<<endl;
    //     }
    //     else{
    //         cout<<"PRIME for: "<<num<<endl;
    //     }
    //     num=num+1;
    // }
    // return 0;

    int n;
    cin>>n;
    bool isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==0){
        cout<<"is not a Prime"<<endl;
    }
    else{
        cout<<"is Prime"<<endl;
    }
}