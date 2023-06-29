#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
int n;
cin>>n;
if(isPrime(n)){
    cout<<"It's Prime"<<endl;
}
else{
    cout<<"It's not Prime"<<endl;
}
}