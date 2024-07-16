#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    
    int ans = 0;
    if (n - m >= 0) {
        ans++;
        n -= m;
    }
    ans += n / p;

    cout << ans << endl;

    return 0;
}
