#include <bits/stdc++.h>
using namespace std;

const double PI = 3.14159265358979323;

int main() {
    int t;
    double l, x, y;
    int q;
    cin >> t >> l >> x >> y >> q;
    vector<int> e(q);
    for (int i = 0; i < q; i++) cin >> e[i];
    double r = l / 2;

    for (int i = 0; i < q; i++) {
        e[i] %= t;
        double co = cos(e[i] * 2 * PI / t);
        double si = sin(e[i] * 2 * PI / t);

        double kx = 0, ky = r * (-si), kz = r * (1-co);
        double dx = x - kx, dy = y - ky, dz = kz;

        double d = sqrt(dx * dx + dy * dy);
        double h = dz;

        double ans = atan2(h, d) * 180 / PI;
        printf("%.12f\n", ans);
    }


    return 0;
}
