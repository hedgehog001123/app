#include <bits/stdc++.h>
using namespace std;

int main() {
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    int p2 = (xa - xb)*(xa - xb) + (ya - yb)*(ya - yb);
    int q2 = (xb - xc)*(xb - xc) + (yb - yc)*(yb - yc);
    int r2 = (xc - xa)*(xc - xa) + (yc - ya)*(yc - ya);

    if (p2 + q2 == r2 || q2 + r2 == p2 || r2 + p2 == q2) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
