#include<bits/stdc++.h>
using namespace std;

void revresing(char name[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(name[start++],name[end--]);
    }
}

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cin>>name;
    int ans=getLength(name);
    cout<<"The reverse string is: ";
    revresing(name,ans);
    cout<<name;
}