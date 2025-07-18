#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
const int Max = 2e5 + 5;

long long fact[Max];
long long invFact[Max];

long long pow_mod(long long base, long long exp, long long mod){
    long long result = 1;
    base %= mod;
    while(exp>0){
        if(exp%2==1){
            result = (result*base)%mod;
        }
        base = (base*base)%mod;
        exp /= 2;
    }

    return result;
}

void preCompute(){
    fact[0] = 1;
    for(int i=1;i<Max;i++){
        fact[i] = (i*fact[i-1])%mod;
    }

    invFact[Max-1] = pow_mod(fact[Max-1],mod-2,mod);
    for(int i=Max-2;i>=0;i--){
        invFact[i] = (invFact[i+1]*(i+1))%mod;
    }
}

long long nCr(long long n, long long r){
    if(n<0 || r>n)
        return 0;
    return (((fact[n]*invFact[r])%mod)*((invFact[n-r])%mod))%mod;    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    preCompute();

    int T;
    cin>>T;
    while(T--){
        long long n, m;
        cin>>n>>m;
        // (n+m)Cn = (n+m)!/n!*m!
        cout<<nCr(n+m,n)<<endl;
    }

    return 0;
}
