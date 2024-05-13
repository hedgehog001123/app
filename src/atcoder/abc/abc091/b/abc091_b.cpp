#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    cin >> m;
    vector<string> t(m);
    for(int i = 0; i < m; i++) cin >> t[i];

    int ans = 0;
    map<string, int> ma;
    for(int i = 0; i < m; i++) {
        ma[t[i]]--;
    }
    for(int i = 0; i < n; i++) {
        ma[s[i]]++;
        ans = max(ans, ma[s[i]]);
    }

    cout << ans << endl;

    return 0;
}
