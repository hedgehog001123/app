#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }
    sort(p.begin(), p.end());

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += p[i].second;
    }

    if (sum <= k) {
        cout << 1 << endl;
        return 0;
    }

    int idx = -1;
    for (int i = 0; i < n; i++) {
        sum -= p[i].second;
        if (sum <= k) {
            idx = i;
            break;
        }
    }
    cout << p[idx].first+1 << endl;

    return 0;
}
