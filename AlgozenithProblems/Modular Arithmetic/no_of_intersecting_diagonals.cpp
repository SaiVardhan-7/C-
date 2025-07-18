#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

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
    result %= mod;

    return result;
}

long long mmi(long long a, long long mod){
    return pow_mod(a,mod-2,mod);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
// No.of Intersecting Diagonals = nc4 = (n*(n-1)*(n-2)*(n-3))/24
// For any set of 4 vertices, exactly one intersection point is formed

    int T;
    cin>>T;
    long long inv24 = mmi(24,mod);
    while(T--){
        long long n;
        cin>>n;

        if (n < 4) {
            cout << 0 << endl;
            continue;
        }

        long long a = n % mod;
        long long b = (n - 1) % mod;
        long long c = (n - 2) % mod;
        long long d = (n - 3) % mod;

        long long ans = (((((a * b) % mod) * c) % mod) * d) % mod;
        ans = (ans * inv24) % mod;
        
        cout<<ans<<endl;
    }

    return 0;
}
