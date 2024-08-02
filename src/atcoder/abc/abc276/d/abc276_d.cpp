#include <bits/stdc++.h>
using namespace std;

vector<pair<long long, long long>> prime_factorize(long long N) {
    vector<pair<long long, long long>> res;

    for (long long p = 2; p * p <= N; p++) {
        if (N % p != 0) {
            continue;
        }

        int e = 0;
        while (N % p == 0) {
            e++;
            N /= p;
        }

        res.emplace_back(p, e);
    }

    if (N != 1) {
        res.emplace_back(N, 1);
    }
    return res;
}

long long tmp[1010][3];

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // const auto& pf = prime_factorize(460);
    // for (auto [p, e]: pf) cout << p << "^" << e << "*";

    for (int i = 0; i < n; i++) tmp[i][2] = 1;
    for (int i = 0; i < n; i++) {
        const auto& pf = prime_factorize(a[i]);
        for (auto [p, e]: pf) {
            if (p == 2) tmp[i][0] = e;
            else if (p == 3) tmp[i][1] = e;
            else {
                for (int j = 0; j < e; j++) tmp[i][2] *= p; 
            }
        }
    }

    bool ok = true;
    for (int i = 0; i < n-1; i++) if (tmp[i][2] != tmp[i+1][2]) ok = false;

    long long two_min = 2000, three_min = 2000;
    for (int i = 0; i < n; i++) two_min = min(two_min, tmp[i][0]);
    for (int i = 0; i < n; i++) three_min = min(three_min, tmp[i][1]);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += tmp[i][0]-two_min;
        ans += tmp[i][1]-three_min;
    }

    if (ok) cout << ans << endl;
    else cout << "-1" << endl;

    return 0;
}
