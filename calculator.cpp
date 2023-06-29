#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    char op;
    cout<<"Enter the Operator"<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<"The sum is: "<<(a+b)<<endl;
        break;

        case '-':
        cout<<"The sum is: "<<(a-b)<<endl;
        break;

        case '*':
        cout<<"The sum is: "<<(a*b)<<endl;
        break;

        case '/':
        cout<<"The sum is: "<<(a/b)<<endl;
        break;

        default:
        cout<<endl;
    }
}