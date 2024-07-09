#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int n = (int)s.size(), m = (int)t.size();
    if (n > m) {
        cout << "No" << endl;
        return 0;
    }

    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
