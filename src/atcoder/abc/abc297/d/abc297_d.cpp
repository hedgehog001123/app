#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long M = max(a, b), m = min(a, b);

    long long ans = 0;
    while (M != m) {
        long long cnt = (M-1) / m;
        ans += cnt;
        M -= m * cnt;
        swap(M, m);
    }
    
    cout << ans << endl;

    return 0;
}
