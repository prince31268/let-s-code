#include<bits/stdc++.h>
using namespace std;

char getMaximumOccurance(string s){
    int arr[26]={0};
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int number=0;
        if(ch>='a' && ch<='z'){
            number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }

    int maxi=-1, ans=-1;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return ans+'a';
}

int main(){
    string s;
    cin>>s;
    cout<<getMaximumOccurance(s);
}