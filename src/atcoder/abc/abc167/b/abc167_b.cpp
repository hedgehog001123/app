#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int ans = 0;
    if (a + b >= k) {
        cout << min(a, k) << endl;
    } else {
        cout << a - (k - a - b) << endl;
    }

    return 0;
}
