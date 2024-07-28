#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    set<pair<int, int>> se;
    int x = 0, y = 0;
    se.insert({x, y});
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') x++;
        if (s[i] == 'L') x--;
        if (s[i] == 'U') y++;
        if (s[i] == 'D') y--;

        se.insert({x, y});
    }

    if ((int)se.size() <= n) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}
