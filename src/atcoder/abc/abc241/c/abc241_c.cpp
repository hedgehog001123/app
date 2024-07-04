#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    vector<vector<int>> t(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] == '#') t[i][j] = 1;
            if (s[i][j] == '.') t[i][j] = 0;
        }
    }

    bool ok = false;
    // tate
    for (int i = 0; i <= n-6; i++) {
        for (int j = 0; j < n; j++) {
            if (t[i][j]+t[i+1][j]+t[i+2][j]+t[i+3][j]+t[i+4][j]+t[i+5][j] >= 4) ok = true;
        }
    }

    // yoko
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n-6; j++) {
            if (t[i][j]+t[i][j+1]+t[i][j+2]+t[i][j+3]+t[i][j+4]+t[i][j+5] >= 4) ok = true;
        }
    }

    // naname
    for (int i = 0; i <= n-6; i++) {
        for (int j = 0; j <= n-6; j++) {
            if (t[i][j]+t[i+1][j+1]+t[i+2][j+2]+t[i+3][j+3]+t[i+4][j+4]+t[i+5][j+5] >= 4) ok = true;
            if (t[i+5][j]+t[i+4][j+1]+t[i+3][j+2]+t[i+2][j+3]+t[i+1][j+4]+t[i][j+5] >= 4) ok = true;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
