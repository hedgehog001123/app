#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100010];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int q;
    cin >> q;
    int l[100010], r[100010];
    for(int i = 0; i < q; i++) cin >> l[i] >> r[i];
    int s[100010];
    s[0] = 0;
    for(int i = 1; i <= n; i++) {
        s[i] = s[i - 1] + a [i];
    }
    for(int i = 0; i < q; i++) {
        if((s[r[i]] - s[l[i] - 1]) * 2 > r[i] - l[i] + 1) cout << "win" << endl;
        else if((s[r[i]] - s[l[i] - 1]) * 2 == r[i] - l[i] + 1) cout << "draw" << endl;
        else cout << "lose" << endl;
    }

    return 0;
}
