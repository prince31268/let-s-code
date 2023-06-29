#include<bits/stdc++.h>
using namespace std;

//Palindrome checking but the characters are considered as non-case sensitive....

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool check_palindrome(char s[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(toLowerCase(s[start])!=toLowerCase(s[end])){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
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
    int length=getLength(name);
    cout<<"Is it palindrome: "<<check_palindrome(name,length);
}