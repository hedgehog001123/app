#include <bits/stdc++.h>
using namespace std;

const long long mod = 998244353;

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

// 分数a/bをmodでわる...「÷b」を「×b^(M-2)」に書き換える
long long Division(long long a, long long b, long long m) {
    return (a * Power(b, m - 2, m)) % m;
}

int main() {
    long long N, K;
    cin >> N >> K;
    // 黒いボールが移動する確率 = 2(n-1) / n^2
    // 黒いボールが移動しない確率 = n^2-2n+2 / n^2

    // 期待値がP/Qのとき、Division(P, Q, mod)を出力する。
    // cout << Division(3, 2, mod) << endl;

    // z_n+1 = 2(n-1)/n^2 + z_n
    
    cout << Division((N%mod)*(N%mod)*(N%mod) + (N%mod)*(N%mod) - 5*(N%mod) + 4, N * N, mod) << endl;

    return 0;
}
