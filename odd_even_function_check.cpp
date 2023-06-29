#include<bits/stdc++.h>
using namespace std;

bool isEven(int num){
    if(num&1)return false;
    return true;
}
int main(){
int n;
cin>>n;
if(isEven(n)){
    cout<<"It's Even Number"<<endl;
}
else{
    cout<<"It's ODD Number"<<endl;
}
}