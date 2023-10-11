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


//This bool check function is for coding ninja palindrome checking questions.
bool check(char ch){
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9'){
        return false;
    }else{
        return true;
    }
}


bool check_palindrome(char s[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){

        //This commented code is for coding ninja palindrome questions.
        // if(check(s[start])){
        //     start++;
        // }else if(check(s[end])){
        //     end--;
        // }


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