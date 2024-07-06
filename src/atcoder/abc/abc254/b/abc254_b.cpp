#include <bits/stdc++.h>
using namespace std;

int ans[32][32];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) ans[i][j] = 1;
            else ans[i][j] = ans[i-1][j-1] + ans[i-1][j];

            cout << ans[i][j];
            if (j != i) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
