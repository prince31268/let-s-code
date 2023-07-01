#include<bits/stdc++.h>
using namespace std;

string getPermutation(int n, int k) {
        vector<int>num;
        int factorial=1;
        for(int i=1;i<n;i++){
            factorial=factorial*i;
            num.push_back(i);
        }
        num.push_back(n);
        string ans="";
        k=k-1;
        while(true){
            ans=ans+to_string(num[k/factorial]);
            num.erase(num.begin()+(k/factorial));
            if(num.size()==0){
                break;
            }
            k=k%factorial;
            factorial=factorial/num.size();
        }
        return ans;
}

int main(){
    int n=4;
    int k=17;
    cout<<getPermutation(n,k);
    cout<<endl;
    
}