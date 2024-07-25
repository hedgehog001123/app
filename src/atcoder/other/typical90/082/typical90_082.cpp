#include <bits/stdc++.h>
using namespace std;

const long long mod = 1'000'000'007;

long long ketasuu(long long n) {
    return to_string(n).length();
}

long long Power(long long a, long long b, long long m) {
    long long p = a, Answer = 1;
    for (int i = 0; i < 30; i++) {
        int wari = (1 << i);
        if ((b / wari) % 2 == 1) {
            Answer = (Answer * p) % m;
        }
        p = (p * p) % m;
    }
    return Answer;
}

long long Division(long long a, long long b, long long m) {
    return (a * Power(b, m-2, m)) % m;
}

int main() {
    long long L, R;
    cin >> L >> R;
    long long Lketa, Rketa;
    Lketa = ketasuu(L);
    Rketa = ketasuu(R);

    long long ans = 0;
    for (int i = Lketa; i <= Rketa; i++) {
        long long tmp = 1LL;
        for (int j = 0; j < i; j++) {
            tmp *= 10LL;
        }
        long long l = tmp/10, r = tmp-1;
        if (i == Lketa) l = L;
        if (i == Rketa) r = R;

        ans = ans + Division(((l+r)%mod*((r-l+1)%mod))%mod, 2, mod) * i;
        ans %= mod;
    }

    cout << ans%mod << endl;

    return 0;
}
