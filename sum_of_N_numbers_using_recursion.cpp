#include<bits/stdc++.h>
using namespace std;


//Parametrized Way of solving the problem
void summation(int i,int sum){
    if(i<1){
        cout<<sum<<" ";
        return;
    }
    summation(i-1,sum+i);
}



//Functional way of solving the problem

int add(int n){
    if(n==0) return 0;
    return n+add(n-1);
}


int main(){
    int n;
    cin>>n;
    summation(n,0);
    cout<<endl;
    cout<<"***********";
    cout<<endl;
    cout<<add(n)<<endl;
}