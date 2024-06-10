#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000009;

int main() {
    int Q;
    cin >> Q;
    vector<int> a(Q), b(Q);
    for (int i = 0; i < Q; i++) cin >> a[i] >> b[i];
    set<int> S;

    for (int i = 0; i < Q; i++) {
        if (a[i] == 1) S.insert(b[i]);
        if (a[i] == 2) {
            if (!S.size()) {
                cout << "-1" << endl;
                continue;
            }
            int mini;
            auto itr = S.lower_bound(b[i]);
            if (itr == S.end()) {
                itr--;
                mini = abs((*itr)-b[i]);
            }
            else if (itr == S.begin()) {
                mini = abs((*itr)-b[i]);
            }
            else {
                mini = abs((*itr)-b[i]);
                itr--;
                mini = min(mini, abs((*itr)-b[i]));
            }
            cout << mini << endl;
        }
    }

    return 0;
}
