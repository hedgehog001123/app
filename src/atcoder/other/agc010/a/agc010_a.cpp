#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 1) cnt++;
    };

    if (cnt % 2) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
