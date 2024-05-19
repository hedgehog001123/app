#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(4);
    for (int i = 0; i < 4; i++) cin >> a[i];
    sort(a.begin(), a.end());

    bool ok = false;
    if (a[3] == a[0] + a[1] + a[2]) ok = true;
    if (a[0] + a[3] == a[1] + a[2]) ok = true;
    if (a[0] + a[1] + a[3] == a[2]) ok = true;

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
