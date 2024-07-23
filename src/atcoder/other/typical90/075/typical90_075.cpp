#include <bits/stdc++.h>
using namespace std;

vector<pair<long long, long long>> prime_factorize(long long n) {
    vector<pair<long long, long long>> res;

    for (long long p = 2; p * p <= n; p++) {
        if (n % p != 0) {
            continue;
        }

        int e = 0;
        while (n % p == 0) {
            e++;
            n /= p;
        }

        res.emplace_back(p, e);
    }
    
    if (n != 1) {
        res.emplace_back(n, 1);
    }

    return res;
}

int main() {
    long long n;
    cin >> n;

    vector<pair<long long, long long>> a = prime_factorize(n);

    long long cnt = 0;
    for (auto [p, e] : a) {
        cnt += e;
    }

    // cout << "cnt=" << cnt << endl;
    // 1->0 2->1 3,4->2 5,6,7,8->3 9,10,...,16->4

    int tmp = 1;
    int ans;
    for (int i = 0; i <= 60; i++) {
        if (cnt <= tmp) {
            ans = i;
            break;
        }
        tmp *= 2;
    }

    cout << ans << endl;
    

    return 0;
}
