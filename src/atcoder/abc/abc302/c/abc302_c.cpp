#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    bool ok = false;
    sort(s.begin(), s.end());
    do {
        bool tmp = true;
        for (int i = 0; i < n-1; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) {
                if (s[i][j] != s[i+1][j]) cnt++;
            }
            if (cnt != 1) tmp = false;
        }

        if (tmp) ok = true;
    } while (next_permutation(s.begin(), s.end()));

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
