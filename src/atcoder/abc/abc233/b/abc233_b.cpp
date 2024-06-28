#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    string s;
    cin >> l >> r >> s;
    l--;
    r--;
    int n = (int)s.size();
    string t = "";
    for (int i = 0; i < n; i++) {
        if (l <= i && i <= r) t.push_back(s[r -  i + l]);
        else t.push_back(s[i]);
    }

    cout << t << endl;

    return 0;
}
