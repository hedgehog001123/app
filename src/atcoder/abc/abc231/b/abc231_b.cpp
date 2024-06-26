#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        m[s[i]] = 0;
    }
    for (int i = 0; i < n; i++) {
        m[s[i]]++;
    }
    int max = -1;
    string ans;
    for (int i = 0; i < n; i++) {
        if (max < m[s[i]]) {
            max = m[s[i]];
            ans = s[i];
        }
    }

    cout << ans << endl;

    return 0;
}
