#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 2) {
        cout << "Yes" << endl;
        return 0;
    }
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    bool ok = true;
    for (int i = 0; i < n-2; i++) {
        if (s[i] == "sweet" && s[i+1] == "sweet") ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
