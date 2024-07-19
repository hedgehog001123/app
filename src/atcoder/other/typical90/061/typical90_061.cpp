#include <bits/stdc++.h>
using namespace std;

int d[301010];

int main() {
    int q;
    cin >> q;
    vector<int> t(q), x(q);
    for (int i = 0; i < q; i++) cin >> t[i] >> x[i];

    int front = 100000, back = 100001;
    for (int i = 0; i < q; i++) {
        if (t[i] == 1) {
            d[front] = x[i];
            front--;
        }
        if (t[i] == 2) {
            d[back] = x[i];
            back++;
        }
        if (t[i] == 3) {
            cout << d[front + x[i]] << endl;
        }
    }

    return 0;
}
