#include <bits/stdc++.h>
using namespace std;

int a[100010];
int n, x;

// 整数xが何番目に存在するかをreturn;
int search(int x) {
    // // パターン1
    // int l = 1, r = n;
    // while (l <= r) {
    //     int m = (l + r) / 2;
    //     if (x < a[m]) r = m - 1;
    //     if (x == a[m]) return m;
    //     if (x > a[m]) l = m + 1;
    // }

    // パターン2
    int pos = lower_bound(a + 1, a + n + 1, x) - a;
    if (pos <= n && a[pos] == x) return pos;

    return -1; // 整数xが存在しない。
}

int main() {
    cin >> n >> x;
    for (int i = 1; i <= n; i++) cin >> a[i];

    // 配列を昇順にする。この問題では不要。
    // sort(a + 1, a + n + 1);

    int ans = search(x);
    cout << ans << endl;

    return 0;
}
