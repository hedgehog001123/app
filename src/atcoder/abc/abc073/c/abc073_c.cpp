#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    map<int, int> ma;
    for (int i = 0; i < n; i++) {
        ma[a[i]]++;
    }
    int cnt = 0;
    for (const auto& [key, value] : ma) {
        if (value % 2 == 1) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
