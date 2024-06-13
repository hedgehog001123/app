#include <bits/stdc++.h>
using namespace std;

int L, Q;
int c[201010], x[201010];
set<int> S;

int main() {
    cin >> L >> Q;
    for (int i = 0; i < Q; i++) cin >> c[i] >> x[i];
    S.insert(0), S.insert(L);

    for (int i = 0; i < Q; i++) {
        if (c[i] == 1) {
            S.insert(x[i]);
        }
        if (c[i] == 2) {
            auto itr = S.lower_bound(x[i]);
            cout << (*itr) - (*(--itr)) << endl;
        }
    }

    return 0;
}
