#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, n;
    cin >> d >> n;
    int s[100010];
    s[0] = 0;
    for(int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        s[l]++;
        s[r + 1]--;
    }

    int ans[100010];
    ans[0] = 0;
    for (int i = 1; i <= d; i++) {
        ans[i] = ans[i - 1] + s[i];
        cout << ans[i] << endl;
    }

    return 0;
}
