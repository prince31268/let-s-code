#include<bits/stdc++.h>
using namespace std;

void print(int i,int n){
    if(i>n) return ;
    cout<<i<<" ";
    print(i+1,n);
}

//Back Tracking recursion
void print_num(int i,int n){
    if(i<1) return;
    print_num(i-1,n);
    cout<<i<<" ";
}

//Back Tracking to print N to 1;
void print_num2(int i,int n){
    if(i>n) return ;
    print_num2(i+1,n);
    cout<<i<<" ";

}




int main(){
    int n;
    cin>>n;
    print(1,n);
    cout<<endl;
    cout<<"**********"<<endl;
    print_num(n,n);
    cout<<endl;
    cout<<"**********"<<endl;
    print_num2(1,n);
}