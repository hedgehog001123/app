#include <bits/stdc++.h>
using namespace std;

// k番目に近い絶対値を答える O(log2N)？？
// multiset?priority_queue?
// BIT?平衡二分探索木?
// 前計算?sort?

// bool compare(const int& x, const int& y) {
//     return x < y;
// }

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int mini = a[0], ma = a[n-1];

    for (int i = 0; i < q; i++) {
        int b, k;
        cin >> b >> k;
        // TLE
        auto compare = [&](int & x, int& y) {
            return abs(x-b) < abs(y-b);
        };
        sort(a.begin(), a.end(), compare);
        cout << abs(b - a[k-1]) << endl;
    }

    return 0;
}
