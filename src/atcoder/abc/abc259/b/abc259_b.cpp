#include <bits/stdc++.h>
using namespace std;

// (x + yi)(cos0 + isin0) = (xcos0-ysin0) + i(xsin0+ycos0)


int main() {
    double a, b, d;
    cin >> a >> b >> d;
    double e = d * 3.1415926525358979323 / 180;

    printf("%.20f %.20f\n", a * cos(e) - b * sin(e), a * sin(e) + b * cos(e));

    return 0;
}
