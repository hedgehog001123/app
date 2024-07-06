#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool sm = false, lg = false;
    int n = (int)s.size();
    bool ok;

    for (int i = 0; i < n; i++) {
        if ('a' <= s[i] && s[i] <= 'z') {
            sm = true;
        }
        if ('A' <= s[i] && s[i] <= 'Z') {
            lg = true;
        }
    }

    ok = (sm && lg);

    sort(s.begin(), s.end());
    for (int i = 0; i < n-1; i++) {
        if (s[i] == s[i+1]) ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
