#include <bits/stdc++.h>
using namespace std;

int ok[10100];
bool c[110][10010];

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    
    c[0][0] = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10010; j++) {
            if (c[i][j] == true) {
                c[i+1][j+a[i]] = true;
                c[i+1][j+b[i]] = true;
            }
        }
    }

    if (c[n][x] == true) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
