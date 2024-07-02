#include <bits/stdc++.h>
using namespace std;

// f(15)=6 f(2220)=221 f(12345)=2346
// f(x) = x % 10...00 + 1
// f(3) = 3
// f(1)+...+f(9) == 1+2+...+9
// f(10)+...+f(99) == 1+2+...+90
// f(100)+...+f(999) == 1+2+...+900
// f(1000)+...+f(1234) == 1+2+...+235

// modの逆元499122177
const long long mod = 998244353;

long long ketasuu(long long a) {
    int ret = 0;
    while (a) {
        a /= 10;
        ret++;
    }
    return ret;
}

// x: 桁数
long long g(long long x) {
    long long y = 9;
    x--;
    while (x) {
        y *= 10;
        y %= mod;
        x--;
    }
    return ((y * (y+1)) % mod) * 499122177 % mod;
}

int main() {
    long long N;
    cin >> N;
    long long m = ketasuu(N);
    long long ans = 0;
    for (long long i = 1; i <= m-1; i++) {
        ans += g(i);
        ans %= mod;
    }

    long long ten = 1;
    while (m-1) {
        ten *= 10;
        ten %= mod;
        m--;
    }
    long long a = (N-ten+1)%mod;
    ans += (a * (a+1) % mod * 499122177) % mod;

    cout << ans % mod << endl;

    return 0;
}
