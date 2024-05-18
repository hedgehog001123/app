#include <bits/stdc++.h>
using namespace std;

vector<bool> Eratosthenes(int N) {
    vector<bool> isprime(N+1, true);

    isprime[0] = isprime[1] = false;
    for (int p = 2; p <= N; ++p) {
        if (!isprime[p]) continue;
        for (int q = p * 2; q <= N; q += p) {
            isprime[q] = false;
        }
    }

    return isprime;
}

int MAX = 101010;
vector<bool> isprime = Eratosthenes(MAX);

int main() {
    int q;
    cin >> q;

    vector<int> a(MAX, 0);
    for (int i = 0; i < MAX; i++) {
        if (i % 2 == 0) continue;
        if (isprime[i] && isprime[(i+1)/2]) a[i] = 1;
    }

    vector<int> s(MAX+1, 0);
    for (int i = 0; i < MAX; i++) s[i + 1] = s[i] + a[i];

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << s[r + 1] - s[l] << endl;
    }

    return 0;
}
