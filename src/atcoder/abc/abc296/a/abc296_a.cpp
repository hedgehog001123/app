#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    bool ok = true;
    if (n == 1) {
        cout << "Yes" << endl;
        return 0;
    }

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i+1]) ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
