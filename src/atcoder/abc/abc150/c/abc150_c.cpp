#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n), q(n), r(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
        cin >> q[i];
    for (int i = 0; i < n; i++)
        r[i] = i + 1;

    int cnt = 0;
    int ans = 0;
    do {
        cnt++;
        bool ok_p = true;
        for (int i = 0; i < n; i++) {
            if (p[i] != r[i])
                ok_p = false;
        }
        bool ok_q = true;
        for (int i = 0; i < n; i++) {
            if (q[i] != r[i])
                ok_q = false;
        }

        if (ok_p)
            ans += cnt;
        if (ok_q)
            ans -= cnt;
    } while (next_permutation(r.begin(), r.end()));

    cout << abs(ans) << endl;

    return 0;
}
