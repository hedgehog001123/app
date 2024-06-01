#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l(n), r(n);
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++) cin >> l[i] >> r[i];
    for (int i = 0; i < n; i++) {
        p.push_back(make_pair(r[i], l[i]));
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++) {
        l[i] = p[i].second;
        r[i] = p[i].first;
    }

    int CurrentTime = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (CurrentTime <= l[i]) {
            CurrentTime = r[i];
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
