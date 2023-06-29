#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(i>n) return;
    cout<<n<<" ";
    print(i,n-1);
}


//OR
void print_reverse(int i,int n){
    if(i<1) return ;
    cout<<i<<" ";
    print_reverse(i-1,n);
}

int main(){
int n;
cin>>n;
print(1,n);
cout<<endl;
cout<<"************";
cout<<endl;
print_reverse(n,n);
}