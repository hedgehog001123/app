#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s(10);
    for (int i = 0; i < 10; i++) cin >> s[i];

    vector<pair<int, int>> p;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (s[i][j] == '#') p.push_back(make_pair(i, j));
        }
    }

    int a=30, b = -30, c = 30, d = -30;
    for (auto f: p) {
        a = min(a, f.first + 1);
        b = max(b, f.first + 1);
        c = min(c, f.second + 1);
        d = max(d, f.second + 1);
    }

    printf("%d %d\n%d %d\n", a, b, c, d);

    return 0;
}
