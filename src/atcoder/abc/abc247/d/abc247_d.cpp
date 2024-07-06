#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    vector<long long> query(Q), x(Q), c(Q);
    queue<pair<long long, long long>> A;
    for (int i = 0; i < Q; i++) {
        cin >> query[i];
        if (query[i] == 1) cin >> x[i] >> c[i];
        if (query[i] == 2) cin >> c[i];
    }

    for (int i = 0; i < Q; i++) {
        if (query[i] == 1) {
            A.push(make_pair(x[i], c[i]));
        }
        if (query[i] == 2) {
            long long val = 0;
            while (c[i] >= 1) {
                pair<long long, long long> tmp = A.front();
                if (tmp.second <= c[i]) {
                    val += tmp.first * tmp.second;
                    c[i] -= tmp.second;
                    A.pop();
                }
                else {
                    val += tmp.first * c[i];
                    A.front().second -= c[i];
                    c[i] = 0;
                }
            }
            cout << val << endl;
        }
    }

    return 0;
}
