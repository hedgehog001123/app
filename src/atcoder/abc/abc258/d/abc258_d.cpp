#include <bits/stdc++.h>
using namespace std;

long long sum[201010];

int main() {
    long long n, x;
    cin >> n >> x;

    long long ans = 4010101010010101010LL;
    sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        long long a, b;
        cin >> a >> b;
        sum[i] = a + b + sum[i-1];

        if (x >= i) ans = min(ans, sum[i] + (x-i)*b);
    }

    cout << ans << endl;

    return 0;
}
