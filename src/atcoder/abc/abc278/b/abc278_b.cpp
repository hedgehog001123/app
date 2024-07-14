#include <bits/stdc++.h>
using namespace std;

bool ok(int h, int m) {
    bool ret = false;
    if (0 <= h && h <= 23 && 0 <= m && m <= 59) ret = true;
    return ret;
}

// AB時CD分→AC時BD分

int main() {
    int h, m;
    cin >> h >> m;

    while (true) {
        int switch_h = h/10*10 + m/10, switch_m = h%10*10 + m%10;

        if (ok(switch_h, switch_m)) {
            cout << h << " " << m << endl;
            break;
        }

        m++;
        if (m == 60) {
            m = 0;
            h++;
        }
        if (h == 24) {
            h = 0;
        }
    }

    return 0;
}
