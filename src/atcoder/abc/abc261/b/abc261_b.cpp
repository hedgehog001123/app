#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    bool ok = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (s[i][j] == 'W') {
                if (s[j][i] != 'L') ok = false;
            }
            if (s[i][j] == 'L') {
                if (s[j][i] != 'W') ok = false;
            }
            if (s[i][j] == 'D') {
                if (s[j][i] != 'D') ok = false;
            }
        }
    }

    if (ok) cout << "correct" << endl;
    else cout << "incorrect" << endl;

    return 0;
}
