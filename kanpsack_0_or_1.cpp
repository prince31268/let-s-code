#include<bits/stdc++.h>
using namespace std;

int kanpsack(vector<int> &weight, vector<int> &value, int W,int n){
    if(n==0 || W==0) return 0;
    if(weight[n-1]<=W){
        return max(value[n-1]+kanpsack(weight,value,W-weight[n-1],n-1),kanpsack(weight,value,W,n-1));
    }
    else{
        return kanpsack(weight,value,W,n-1);
    }
}

int main(){
    int n=4;
    int W=10;
    vector<int>weight={2,3,4,5};
    vector<int>value={3,4,5,6};
    cout<<kanpsack(weight,value,W,n)<<endl;

}