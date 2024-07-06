#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, r, c;
    cin >> h >> w >> r >> c;
    int ans = 0;
    if (1 < r) ans++;
    if (r < h) ans++;
    if (1 < c) ans++;
    if (c < w) ans++;

    cout << ans << endl;

    return 0;
}
