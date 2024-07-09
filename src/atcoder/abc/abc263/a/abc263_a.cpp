#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(5);
    for (int i = 0; i < 5; i++) cin >> a[i];
    sort(a.begin(), a.end());
    bool ok = true;
    if (a[0] != a[1] || a[3] != a[4]) ok = false;
    if (a[1] != a[2] && a[2] != a[3]) ok = false;

    if (ok) cout << "Yes" <<endl;
    else cout << "No" << endl;

    return 0;
}
