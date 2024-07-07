#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> t(n);
    for (int i = 0; i < n; i++) cin >> s[i] >> t[i];

    map<string, int> ma;
    int maximum = -1;
    for (int i = 0; i < n; i++) {
        if (ma[s[i]] >= 1) continue;
        ma[s[i]] = t[i];
        maximum = max(maximum, t[i]);
    }

    for (int i = 0; i < n; i++) {
        if (ma[s[i]] == maximum) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
