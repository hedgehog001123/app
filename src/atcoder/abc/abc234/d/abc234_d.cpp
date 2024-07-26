#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    priority_queue<int, vector<int>, greater<int>> t;

    for (int i = 0; i < k; i++) {
        t.push(p[i]);
    }
    for (int i = 0; i < n-k+1; i++) {
        cout << t.top() <<endl;
        if (i == n-k) break;
        if (p[k+i] < t.top()) continue;
        else {
            t.pop();
            t.push(p[k+i]);
        }
    }

    return 0;
}
