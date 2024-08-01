#include <bits/stdc++.h>
using namespace std;

bool isprime (int n) {
    bool ret = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) ret = false;
    }
    if (n == 1) ret = false;
    return ret;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // 和が素数->Aoki, not->Takahashi

    bool TakahashiWin = false;
    for (int T = a; T <= b; T++) {
        bool tmp = true;
        for (int A = c; A <= d; A++) {
            if (isprime(T+A)) tmp = false;
        }
        if (tmp) TakahashiWin = true;
    }

    if (TakahashiWin) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;

    return 0;
}
