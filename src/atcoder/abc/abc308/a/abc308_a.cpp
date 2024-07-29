#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> s(8);
    for (int i = 0; i < 8; i++) cin >> s[i];
    bool ok = true;
    for (int i = 0; i < 8; i++) {
        if (s[i] < 100 || s[i] > 675) ok = false;
        if (s[i] % 25 != 0) ok = false;
        if (i <= 6) {
            if (s[i] > s[i+1]) ok = false;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
