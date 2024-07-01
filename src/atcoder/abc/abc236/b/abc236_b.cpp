#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = 4 * n - 1;
    vector<int> a(m), b(n+1);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) b[i] = 0;
    for (int i = 0; i < m; i++) {
        b[a[i]]++;
    }
    int ans;
    for (int i = 1; i <= n; i++) {
        if (b[i] != 4) ans = i;
    }
    cout << ans << endl;
    

    return 0;
}
