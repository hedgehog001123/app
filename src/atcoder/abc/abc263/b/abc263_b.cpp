#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n+1);
    for (int i = 2; i <= n; i++) cin >> p[i];

    int cnt = 0;
    int cur = n;
    while (cur > 1) {
        cur = p[cur];
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}
