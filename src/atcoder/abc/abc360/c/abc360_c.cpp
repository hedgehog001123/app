#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), w(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> w[i];
    map<int, vector<int>> m;
    for (int i = 0; i < n; i++) {
        m[a[i]].push_back(w[i]);
    }

    int ans = 0;
    for (auto ite = m.begin(); ite != m.end(); ite++) {
        int saizu = (ite->second).size();
        if (saizu >= 2) {
            sort((ite->second).begin(), (ite->second).end());
            for (int i = 0; i < saizu-1; i++) {
                ans += (ite->second)[i];
            }
        }
    }

    cout << ans << endl;

    return 0;
}
