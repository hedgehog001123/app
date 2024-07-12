#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    bool ok = true;
    string p = "HDCS", q = "A23456789TJQK";

    for (int i = 0; i < n; i++) {
        bool one = false, two = false;
        for (int j = 0; j < 4; j++) if (s[i][0] == p[j]) one = true;
        for (int j = 0; j < 13; j++) if (s[i][1] == q[j]) two = true;
        if (!(one && two)) ok = false;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (s[i] == s[j]) ok = false;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
