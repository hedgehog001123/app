#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

long long Power(long long a, long long b, long long m) {
    long long p = a, Answer = 1;
    for (int i = 0; i < 30; i ++) {
        int wari = (1 << i);
        if ((b / wari) % 2 == 1) {
            Answer = (Answer * p) % m;
        }
        p = (p * p) % m;
    }
    return Answer;
}

int main() {
    int a, b;
    cin >> a >> b;
    // a^bを10^9+7で割った余りを出力する。
    cout << Power(a, b, mod) << endl;

    return 0;
}
