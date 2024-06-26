#include <bits/stdc++.h>
using namespace std;

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

int main() {
    const long long M = 1000000007;
    long long n, r;
    cin >> n >> r;

    long long a = 1;
    for (int i = 1; i <= n; i++) a = (a * i) % M;

    long long b = 1;
    for (int i = 1; i <= r; i++) b = (b * i) % M;
    for (int i = 1; i <= n - r; i++) b = (b * i) % M;

    cout << Division(a, b, M) << endl;

    return 0;
}
