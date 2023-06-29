#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=3;
    cout<<(a<<3)<<endl;     //"<<" is left shift operator
}
//NOTE
/*
In one left shift , the given number is multiplied twice(BUT NOT ALWAYS,especially in case of bigger number)
for example:
if the given number is 3,then
in 1st left shift: it becomes 6.
In 2nd left shift: it becomes 12.
In 3rd left shift: it becomes 24.
In 4th left shift: it becomes 48. and so on,....
*/