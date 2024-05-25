#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    cin >> N;
    vector<pair<int, int>> p;

    for (int i = 0; i < N; i++) {
        int l, r;
        cin >> l >> r;
        p.push_back({l, r});
    }
    sort(p.begin(), p.end());

    long long ans = 0;
    
    for (int i = 1; i < N; i++) {
        // p[i].first > p[j].second はバツ
        // p[i].second > p[j].first はバツ
        // それ以外の個数をansに加算する
        
        // ansに加算する個数を二分探索で求める。
    }

    cout << ans << endl;

    return 0;
}
