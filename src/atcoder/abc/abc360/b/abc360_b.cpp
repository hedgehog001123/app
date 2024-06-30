#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int n = (int)s.size();
    bool ok = false;
    
    
    for (int c = 1; c < n-1; c++) {
        for (int w = c; w < n-1; w++) {
            int idx = c-1;
            string tmp = "";
            while (idx < n) {
                tmp += s[idx];
                idx += w;
            }
            if (tmp == t) ok = true;
            // cout << tmp << endl;
        }
    }

    if (ok == true) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
