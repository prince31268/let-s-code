#include<bits/stdc++.h>
using namespace std;

int longest_common_subsequence(string s1,string s2,int m,int n){
    if(m==0 || n==0) return 0;
    if(s1[m-1]==s2[n-1]){
        return 1+longest_common_subsequence(s1,s2,m-1,n-1);
    }
    
    if(s1[m-1]!=s2[n-1]){
        return max(longest_common_subsequence(s1,s2,m-1,n),longest_common_subsequence(s1,s2,m,n-1));
    }
}

int main(){
    string s1="abcdefgh";
    string s2="abcklmh";
    int m=s1.size();
    int n=s2.size();
    cout<<longest_common_subsequence(s1,s2,m,n)<<endl;
}