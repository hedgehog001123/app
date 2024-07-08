#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int n = (int)s.size(), m = (int)t.size();
    s += " ", t += " ";

    vector<pair<char, int>> a, b;
    int tmp = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] == s[i+1]) tmp++;
        if (s[i] != s[i+1]) {
            a.push_back(make_pair(s[i], tmp));
            tmp = 1;
        }
    }
    tmp = 1;
    for (int i = 0; i < m; i++) {
        if (t[i] == t[i+1]) tmp++;
        if (t[i] != t[i+1]) {
            b.push_back(make_pair(t[i], tmp));
            tmp = 1;
        }
    }

    vector<char> s_char, t_char;
    vector<int> s_int, t_int;
    for (auto f : a) {
        s_char.push_back(f.first);
        s_int.push_back(f.second);
    }
    for (auto f : b) {
        t_char.push_back(f.first);
        t_int.push_back(f.second);
    }

    bool ok = true;
    if (s_char.size() != t_char.size()) ok = false;
    for (int i = 0; i < (int)s_char.size(); i++) {
        if (s_char[i] != t_char[i]) ok = false;
        if (!((s_int[i] >= 2 && s_int[i] <= t_int[i]) || s_int[i] == t_int[i])) ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
