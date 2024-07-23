#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;

long long Power(long long a, long long b, long long m) {
    long long p = a, Answer = 1;
    for (int i = 0; i < 62; i++) {
        long long wari = (1LL << i);
        if ((b / wari) % 2 == 1) {
            Answer = (Answer * p) % m;
        }
        p = (p * p) % m;
    }
    return Answer;
}

int main() {
    long long n, k;
    cin >> n >> k;
    if (n == 1) {
        cout << k << endl;
        return 0;
    }
    if (n == 2) {
        cout << k * (k-1) << endl;
        return 0;
    }
    if (k == 1) {
        cout << 0 << endl;
        return 0;
    }
    if (k == 2) {
        cout << 0 << endl;
        return 0;
    }

    long long Answer = Power(k - 2, n - 2, mod) * k % mod * (k-1) % mod;
    cout << Answer << endl;

    return 0;
}
