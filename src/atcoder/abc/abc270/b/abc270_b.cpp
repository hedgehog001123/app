#include <bits/stdc++.h>
using namespace std;

int main() {
    // 0->初期位置, x->ゴール, y->壁, z->ハンマー
    int x, y, z;
    cin >> x >> y >> z;
    int ans = 0;
    if (x * y < 0) ans = x;
    else if (x > 0 && y > 0) {
        if (x < y) {
            ans = x;
        }
        else if (y < x) {
            if (y < z) ans = -1;
            else if (z < y) ans = abs(z) + (x-z);
        }
    }
    else if (x < 0 && y < 0) {
        if (x < y) {
            if (y < z) ans = abs(z) + (z-x);
            else if (z < y) ans = -1;
        }
        else if (y < x) {
            ans = abs(x);
        }
    }

    cout << ans << endl;

    return 0;
}
