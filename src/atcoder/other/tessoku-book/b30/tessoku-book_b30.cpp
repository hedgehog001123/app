#include <bits/stdc++.h>
using namespace std;

const long long  mod = 1000000007;

long long Power(long long a, long long b, long long m) {
    long long p = a, Answer = 1;
    for (int i = 0; i < 60; i++) {
        long long wari = (1LL << i);
        if ((b / wari) % 2 == 1) Answer = (Answer * p) % m;
        p = (p * p) % m;
    }
    return Answer;
}

long long Division(long long a, long long b, long long m) {
    return (a * Power(b, m - 2, m)) % m;
}

long long ncr(long long n, long long r) {
    long long a = 1;
    for (int i = 1; i <= n; i++) a = (a * i) % mod;

    long long b = 1;
    for (int i = 1; i <= n - r; i++) b = (b * i) % mod;
    for (int i = 1; i <= r; i++) b = (b * i) % mod;

    return Division(a, b, mod);
}

int main() {
    long long h, w;
    cin >> h >> w;

    cout << ncr(h + w - 2, w - 1) << endl;

    return 0;
}
