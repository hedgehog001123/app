#include <bits/stdc++.h>
using namespace std;

bool kansen[2010];

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    queue<int> q;
    kansen[0] = true;
    q.push(0);
    while (!q.empty()) {
        int tmp = q.front();
        q.pop();
        for (int i = 0; i < n; i++) {
            if (kansen[i]) continue;
            if ((x[tmp]-x[i])*(x[tmp]-x[i])+(y[tmp]-y[i])*(y[tmp]-y[i]) <= d * d) {
                kansen[i] = true;
                q.push(i);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (kansen[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
