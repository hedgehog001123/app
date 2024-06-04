#include <bits/stdc++.h>
using namespace std;

int e[202020];

int main() {
    int n, q;
    cin >> n >> q;
    // 逆順:state = 2;
    int state = 1;

    for (int i = 1; i <= n; i++) e[i] = i;

    for (int i = 1; i <= q; i++) {
        int type, x, y;
        cin >> type;

        if (type == 1) {
            cin >> x >> y;
            if (state == 1) e[x] = y;
            if (state == 2) e[n - x + 1] = y;
        }

        if (type == 2) {
            if (state == 1) state = 2;
            else state = 1;
        }

        if (type == 3) {
            cin >> x;
            if (state == 1) cout << e[x] << endl;
            if (state == 2) cout << e[n - x + 1] << endl;
        }
    }
    

    return 0;
}
