#include <bits/stdc++.h>
using namespace std;

long long cnt[105];

int main() {
    long long n;
    cin >> n;
    for (int i = 0; i < 105; i++) cnt[i] = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cnt[a]++;
    }

    long long ans = 0;
    for (int i = 0; i < 105; i++) {
        ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
    }

    cout << ans << endl;

    return 0;
}
