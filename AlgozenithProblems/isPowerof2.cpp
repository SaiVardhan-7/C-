#include<bits/stdc++.h>
using namespace std;

bool isPowerOf2(int n){
    if(n<=0){
        return false;
    }

    int logValue = log2(n);

    return pow(2,logValue) == n;
}

int main(){
    int n;
    cin>>n;

    if(isPowerOf2(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
