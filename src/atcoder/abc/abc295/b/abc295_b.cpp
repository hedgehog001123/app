#include <bits/stdc++.h>
using namespace std;

int ex[22][22];

int main() {
    int r, c;
    cin >> r >> c;
    vector<string> s(r);
    for (int i = 0; i < r; i++) cin >> s[i];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) ex[i][j] = 0;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if ('1' <= s[i][j] && s[i][j] <= '9') {
                ex[i][j] = (int)(s[i][j]-'0');
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int n = ex[i][j];
            if (n > 0) {
                for (int k = 0; k < r; k++) {
                    for (int l = 0; l < c; l++) {
                        if (abs(k-i) + abs(l-j) <= n) s[k][l] = '.';
                    }
                }
            }
        }
    }

    for (int i = 0; i < r; i++) {
        cout << s[i] << endl;
    }

    return 0;
}
