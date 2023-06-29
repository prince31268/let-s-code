#include<bits/stdc++.h>
using namespace std;

/*
There are four ways for representing function in c++.
1.Take Nothing and return Nothing(TNRN)
2.Take Something and return Nothing(TSRN)
3.Take Nothing and return Something(TNRS)
4.Take something and return Something(TSRS)
*/

/*1. TNRN
    void sum(){
        int a,b;
        cin>>a>>b;
        int add=a+b;
        cout<<add<<endl;
    }

int main(){
    sum();
}
*/


/*2.TSRN
void sum(int a,int b){
        int add=a+b;
        cout<<add<<endl;
    }

int main(){
    int a,b;
    cin>>a>>b;
    sum(a,b);
}
*/


/*3.TNRS

    int sum(){
        int a,b;
        cin>>a>>b;
        int add=a+b;
        return add;
    }
    int main(){
        cout<<sum();
    }
*/


/*TSRS*/
    int sum(int a, int b){
        int add=a+b;
        return add;
    }
    int main(){
        int a,b;
        cin>>a>>b;
        cout<<sum(a,b);
    }
