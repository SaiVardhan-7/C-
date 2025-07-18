#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// Fast modular exponentiation
long long pow_mod(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while(exp > 0) {
        if(exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Modular Multiplicative Inverse using Fermat's Little Theorem
long long mmi(long long a, long long mod) {
    return pow_mod(a, mod - 2, mod);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    long long inv2 = mmi(2, MOD);  // Precompute inverse of 2

    while(T--) {
        long long n;
        cin >> n;
        // No. of diagonals = n(n-3)/2
        long long ans = ((n % MOD) * (((n % MOD) - 3 + MOD) % MOD)) % MOD;
        ans = (ans * inv2) % MOD;
        cout << ans << '\n';
    }

    return 0;
}
