#include <bits/stdc++.h>
using namespace std;

int a[24];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int w, x;
        cin >> w >> x;
        a[x] += w;
    }

    int ans = 0;
    for (int i = 0; i < 24; i++) {
        int tmp = 0;
        for (int j = 0; j < 9; j++) {
            tmp += a[(i+j)%24];
        }
        ans = max(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}
