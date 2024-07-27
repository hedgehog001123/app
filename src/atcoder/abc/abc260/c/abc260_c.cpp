#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x, y;
    cin >> n >> x >> y;
    vector<long long> red(n), blue(n);

    red[0] = 1, blue[0] = 0;
    for (int i = 0; i < n-1; i++) {
        red[i+1] = red[i] * (x + 1) + blue[i];
        blue[i+1] = red[i] * x * y + blue[i] * y;
    }

    cout << blue[n-1] << endl;

    return 0;
}
