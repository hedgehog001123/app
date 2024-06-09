#include <bits/stdc++.h>
using namespace std;

const long long mod = 998244353;
long long N;

// mod = 17として計算
// V1 = 1......1 % 17 == 1(1)
// V2 = 22.....22 % 17 == 5(2 + 3)
// V3 = 333......333 % 17 == 10(3 + 13 + 11)
// V4 = 4444......4444 % 17 == 7(4 + 10 + 2 + 7)
// ⇒Nが1桁の場合は、4,40,400,4000をmodで割ってそれぞれ加算してmodで割った余りが答え

// V10 = 10..10.......

long long pow_10(long long a) {
    long long res = 1;
    for (int i = 0; i < a; i++) {
        res *= 10;
        res %= mod;
    }
    return res;
}

int main() {
    cin >> N;
    long long n = N, ketasuu = 0;
    while (n) {
        n /= 10;
        ketasuu++;
    }

    long long ans = 0;
    for (long long i = 0; i < N; i++) {
        ans += (N * pow_10(i))%mod;
    }

    cout << ans % mod << endl;

    return 0;
}
