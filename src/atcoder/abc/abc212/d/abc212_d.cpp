#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    priority_queue<long long, vector<long long>, greater<long long>> T;

    long long add = 0;
    for (int query = 0; query < Q; query++) {
        int a;
        cin >> a;
        if (a == 1) {
            int b;
            cin >> b;
            T.push(b - add);
        }
        if (a == 2) {
            int c;
            cin >> c;
            add += c;
        }
        if (a == 3) {
            long long d = T.top();
            cout << d + add << endl;
            T.pop();
        }
    }

    return 0;
}
