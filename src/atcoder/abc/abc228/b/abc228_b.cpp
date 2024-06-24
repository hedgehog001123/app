#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    x--;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<bool> isknown(n);
    for (int i = 0; i < n; i++) isknown[i] = false;

    int ans = 0;
    while (!isknown[x]) {
        isknown[x] = true;
        ans++;
        x = a[x]-1;
    }
    cout << ans << endl;

    return 0;
}
