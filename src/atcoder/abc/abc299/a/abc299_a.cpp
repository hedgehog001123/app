#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    string t = "aaa";
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '|' || s[i] == '*') {
            t[idx] = s[i];
            idx++;
        }
    }

    if (t == "|*|") cout << "in" << endl;
    else cout << "out" << endl;

    return 0;
}
