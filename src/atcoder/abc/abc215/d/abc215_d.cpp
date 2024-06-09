#include <bits/stdc++.h>
using namespace std;

set<long long> prime_factorize(long long N) {
    set<long long> res;
    for (long long p = 2; p * p <= N; ++p) {
        if (N % p != 0) {
            continue;
        }
        int e = 0;
        while (N % p == 0) {
            ++e;
            N /= p;
        }
        if (e >= 1) res.insert(p);
    }
    if (N != 1) {
        res.insert(N);
    }
    return res;
}

bool ok[101010];

int main() {
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < 101010; i++) ok[i] = true;

    for (int i = 0; i < n; i++) {
        set<long long> tmp = prime_factorize(a[i]);
        // ok 
        for (auto itr = tmp.begin(); itr != tmp.end(); itr++) {
            int kakeru = 1;
            if (ok[*itr] == false) continue;
            while (*itr * kakeru <= m) {
                ok[*itr * kakeru] = false;
                kakeru++;
            }
        }
    }

    int cntAnswer = 0;
    for (int i = 1; i <= m; i++) {
        if (ok[i] == true) cntAnswer++;
    }
    cout << cntAnswer << endl;
    for (int i = 1; i <= m; i++) {
        if (ok[i] == true) cout << i << endl;
    }

    return 0;
}
