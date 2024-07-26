#include <bits/stdc++.h>
using namespace std;

bool Deleted[1000000];

long long f(long long p, long long q) {
    double est = 1;
    est = (q*q*q);
    est += p;
    if (est > 4e18) return 4e18;
    return p*q*q*q;
}

int main() {
    long long n;
    cin >> n;

    // 素数列primeを求める
    for (int i = 2; i < 1000000; i++) Deleted[i] = false;
    for (int i = 2; i < 1000000; i++) {
        if (Deleted[i] == true) continue;
        for (int j = i * 2; j < 1000000; j += i) Deleted[j] = true;
    }
    vector<long long> prime;
    for (int i = 2; i < 1000000; i++) {
        if (Deleted[i] == false) prime.push_back(i);
    }

    int ans = 0;
    int pi = 0, qi = 1;
    long long p = prime[pi], q = prime[qi];
    while (p * p * p * p <= n) {
        p = prime[pi], q = prime[qi];
        while (f(p, q) <= n) {
            ans++;
            qi++;
            q = prime[qi];
        }
        pi++;
        qi = pi + 1;
    }

    cout << ans << endl;

    return 0;
}
