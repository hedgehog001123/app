#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;
    int n = (int)s.size();

    vector<int> ruisekiwa(n+1);
    ruisekiwa[0] = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') ruisekiwa[i+1] = ruisekiwa[i] + 1;
        else ruisekiwa[i+1] = ruisekiwa[i];
    }

    int ans = 0;
    int r = 0;
    for (int l = 0; l < n; l++) {
        while (r < n && ruisekiwa[r+1] - ruisekiwa[l] <= k) {
            r++;
        }
        ans = max(ans, r - l);
    }

    cout << ans << endl;

    return 0;
}
