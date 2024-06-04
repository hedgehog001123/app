#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    vector<string> b(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];

    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] == "E") x = max(x, l - a[i]);
        if (b[i] == "W") y = max(y, a[i]);
    }

    cout << max(x, y) << endl;

    return 0;
}
