#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(5);
    for (int i = 0; i < 5; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 1;
    for (int i = 0; i < 4; i++) {
        if (a[i] != a[i+1]) ans++;
    }

    cout << ans << endl;

    return 0;
}
