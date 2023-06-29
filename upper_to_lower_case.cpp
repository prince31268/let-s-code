#include<bits/stdc++.h>
using namespace std;
 
 char upper_to_lower_case(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
 }

 int main(){
    cout<<"The lower case of the character is: "<<upper_to_lower_case('B')<<endl;
    cout<<"The lower case of the character is: "<<upper_to_lower_case('b');
 }