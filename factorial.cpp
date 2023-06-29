#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1;
    while(n!=1){
        fact=fact*n;
        n--;

    }
    cout<<fact<<endl;
}