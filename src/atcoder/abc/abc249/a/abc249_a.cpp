#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int taka = 0, aoki = 0;

    for (int i = 1; i <= x; i++) {
        if (0 < i % (a+c) && i % (a+c) <= a) taka += b;
        if (0 < i % (d+f) && i % (d+f) <= d) aoki += e;
    }
    
    if (taka > aoki) cout << "Takahashi" << endl;
    if (taka == aoki) cout << "Draw" << endl;
    if (taka < aoki) cout << "Aoki" << endl;

    return 0;
}
