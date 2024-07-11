#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    int ma = -1;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        ma = max(ma, h[i]);
    }

    for (int i = 0; i < n; i++) {
        if (ma == h[i]) cout << i + 1 << endl;
    }

    return 0;
}
