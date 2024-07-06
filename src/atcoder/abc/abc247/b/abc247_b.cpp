#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    for (int i = 0; i < n; i++) cin >> s[i] >> t[i];

    bool ok = true;
    for (int i = 0; i < n; i++) {
        bool a = true, b = true;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (s[i] == s[j]) a = false;
            if (s[i] == t[j]) a = false;
            if (t[i] == s[j]) b = false;
            if (t[i] == t[j]) b = false;
        }
        if (!(a || b)) ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
