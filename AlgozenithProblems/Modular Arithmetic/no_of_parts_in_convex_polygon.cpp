#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

// Fast exponentiation
long long pow_mod(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Modular Multiplicative Inverse
long long mmi(long long a, long long mod) {
    return pow_mod(a, mod - 2, mod);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    long long inv2 = mmi(2, mod);
    long long inv24 = mmi(24, mod);

    while (T--) {
        long long n;
        cin >> n;
        // 1 + n(n-3)/2 + n(n-1)(n-2)(n-3)/24
        long long ans1 = (((n % mod) * ((n - 3) % mod)) % mod * inv2) % mod;

        long long a = n % mod;
        long long b = (n - 1 + mod) % mod;
        long long c = (n - 2 + mod) % mod;
        long long d = (n - 3 + mod) % mod;

        long long ans2 = (((((a * b) % mod) * c) % mod) * d) % mod;
        ans2 = (ans2 * inv24) % mod;

        long long total = (ans1 + ans2 + 1) % mod;
        cout << total << '\n';
    }

    return 0;
}
