#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int ap = a % 2, bp = b % 2, cp = c % 2;

    if (ap == bp && bp == cp) cout << (3 * max(a, max(b, c)) - a - b - c) / 2 << endl;
    else {
        if (ap == bp) {
            a++;
            b++;
        }
        if (bp == cp) {
            b++;
            c++;
        }
        if (cp == ap) {
            c++;
            a++;
        }
        cout << 1 + (3 * max(a, max(b, c)) - a - b - c) / 2 << endl;
    }

    return 0;
}
