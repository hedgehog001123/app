#include <bits/stdc++.h>
using namespace std;

int main() {
    // ABC085 B問題 Kagami Mochi
    // https://atcoder.jp/contests/abc085/tasks/abc085_b
    // 概要: 「要素数Nの配列には何種類の異なる値があるか？」

    int n;
    cin >> n;
    vector<int> d(n);
    for(int i = 0; i < n; i++) cin >> d[i];

    // 方針1: バケット法
    int flag[101];
    for(int i = 0; i < n; i++) {
        flag[d[i]] = 1;
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += flag[i];
    }
    cout << ans << endl;

    // 方針2: setを使う
    set<int> se;
    for(int i = 0; i < n; i++) se.insert(d[i]);
    cout << se.size() << endl;

    return 0;
}
