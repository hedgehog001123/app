#include <bits/stdc++.h>
using namespace std;

// 文字列の代わりにハッシュ値を比較する

long long mod = 2147483647;
long long T[201010], H[201010], Power100[201010];

long long Hash_value(int l, int r) {
    long long val = H[r] - (H[l-1] * Power100[r-l+1] % mod);
    if (val < 0) val += mod;
    return val;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    vector<int> a(Q+1), b(Q+1), c(Q+1), d(Q+1);
    for (int i = 1; i <= Q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    for (int i = 1; i <= N; i++) T[i] = (S[i-1] - 'a') + 1;

    Power100[0] = 1;
    for (int i = 1; i <= N; i++) Power100[i] = 100LL * Power100[i-1] % mod;

    H[0] = 0;
    for (int i = 1; i <= N; i++) H[i] = (100LL * H[i-1] + T[i]) % mod;

    for (int i = 1; i <= Q; i++) {
        long long Hash1 = Hash_value(a[i], b[i]);
        long long Hash2 = Hash_value(c[i], d[i]);
        if (Hash1 == Hash2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
