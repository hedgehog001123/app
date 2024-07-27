#include <bits/stdc++.h>
using namespace std;

int main() {
    //初項A, 公差D, 項数N
    // A+(N-1)D (N=1, 2, 3, ..., N)
    long long x, a, d, n;
    cin >> x >> a >> d >> n;

    if (d < 0) {
        a = a + (n - 1) * d;
        d *= -1;
    }

    long long mi = a;
    long long ma = a + (n - 1) * d;

    if (x <= mi) cout << mi - x << endl;
    else if (ma <= x) cout << x - ma << endl;
    else {
        cout << max((x - a) % d, d - ((x - a) % d)) << endl;
    }

    return 0;
}
