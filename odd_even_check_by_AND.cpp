#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n&1){
        cout<<"ODD"<<endl;
    }
    else{
        cout<<"EVEN"<<endl;
    }
    return 0;
}

/*
if we need to combine dig=1,2,3 to make 123:
we can do it as:
ans=0;
//while(dig!=0){
ans=ans*10+dig;
}

i.e.
1--->  ans=0*10+1;      =>1
2--->  ans=1*10+2;      =>12
3--->  ans=12*10+3      =>123
*/









/*
Similarly if we want to make dig=1,2,3 to 321 directly then:
We can do it as:
i=0
while(dig!=0){
    ans=(dig*10^i)+ans;
    i++;
}

i.e.
1---> ans=(1*10^0)+0;           =>1
2---> ans=(2*10^1)+1;           =>21
3---> ans=(3*10^2)+21;          =>321
*/
