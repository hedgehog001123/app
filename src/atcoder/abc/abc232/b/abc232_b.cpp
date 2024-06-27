#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int n = s.size();
    bool ok = false;
    
    for (int k = 0; k <= 25; k++) {
        string s2 = s;
        for (int i = 0; i < n; i++) {
            s2[i] = ((s2[i] - 'a') + k) % 26 + 'a';
        }
        if (s2 == t) ok = true;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
