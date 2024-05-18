#include <bits/stdc++.h>
using namespace std;

int n, d;
int a[100010];
int l[100010], r[100010];
int p[100010], q[100010];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> d;
    for (int i = 1; i <= d; i++) cin >> l[i] >> r[i];

    // p[i]を求める
    p[1] = a[1];
    for (int i = 2; i <= n; i++) p[i] = max(p[i - 1], a[i]);

    // q[i]を求める
    q[n] = a[n];
    for (int i = n - 1; i >= 1; i--) q[i] = max(q[i + 1], a[i]);

    for (int i = 1; i <= d; i++) {
        cout << max(p[l[i]-1], q[r[i]+1]) << endl;
    }

    return 0;
}
