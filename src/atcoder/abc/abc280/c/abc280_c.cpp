#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size()) {
            cout << s.size()+1 << endl;
            break;
        }
        if (s[i] != t[i]) {
            cout << i+1 << endl;
            break;
        }
    }

    return 0;
}
