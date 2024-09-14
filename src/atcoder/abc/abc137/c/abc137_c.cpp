#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++) {
        sort(s[i].begin(), s[i].end());
    }

    map<string, long long> m;
    for (int i = 0; i < n; i++)
        m[s[i]]++;

    long long ans = 0;
    for (auto it = m.begin(); it != m.end(); it++)
        ans += it->second * (it->second - 1) / 2;

    cout << ans << endl;

    return 0;
}
