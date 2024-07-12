#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    if ((int)s.size() < (int)t.size()) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i <= (int)s.size() - (int)t.size(); i++) {
        bool ok = true;
        for (int j = 0; j < (int)t.size(); j++) {
            if (s[i+j] != t[j]) ok = false;
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
