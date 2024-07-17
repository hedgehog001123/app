#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n)), b(n, vector<int>(n)), tmp(n, vector<int>(n));
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> a[i][j];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> b[i][j];

    for (int p = 0; p < 5; p++) {
        bool match = true;
        for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                if (b[i][j] == 0) match = false;
            }
        }
        if (match) {
            cout << "Yes" << endl;
            return 0;
        }
        for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
            tmp[n-1-j][i] = a[i][j];
        }
        for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
            a[i][j] = tmp[i][j];
        }
    }

    cout << "No" << endl;

    return 0;
}
