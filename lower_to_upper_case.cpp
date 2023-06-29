#include<bits/stdc++.h>
using namespace std;

char lower_to_upper_case(char ch){
    if(ch>='A' && ch<='Z'){
        return ch;
    }
    else{
        int temp=ch-'a'+'A';
        return temp;
    }
}

int main(){
    cout<<"The upper case of the given character is: "<<lower_to_upper_case('a')<<endl;
    cout<<"The upper case of the given character is: "<<lower_to_upper_case('L')<<endl;
    
}