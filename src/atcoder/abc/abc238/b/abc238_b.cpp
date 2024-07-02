#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<bool> cut(360);
    for (int i = 0; i < 360; i++) cut[i] = false;
    cut[0] = true;

    int cur = 0;
    for (int i = 0; i < n; i++) {
        cur += a[i];
        cur %= 360;
        cut[cur] = true;
    }

    int ma = -1;
    int tmp = 0;
    for (int i = 0; i <720; i++) {
        if (cut[i%360]==false) tmp++;
        else {
            ma = max(ma, tmp);
            tmp = 0;
        }
    }

    cout << min(ma + 1, 359) << endl;

    return 0;
}
