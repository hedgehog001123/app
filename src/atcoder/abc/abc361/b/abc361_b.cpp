#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;

    bool x_ok = false, y_ok = false, z_ok = false;
    if (min(x2, x4) > max(x1, x3)) x_ok = true;
    if (min(y2, y4) > max(y1, y3)) y_ok = true;
    if (min(z2, z4) > max(z1, z3)) z_ok = true;

    if (x_ok && y_ok && z_ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
