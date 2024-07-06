#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    
    int ans = 0;
    for (int i = 0; i < (1 << n); i++) {
        int cnt[26];
        for (int j = 0; j < 26; j++) cnt[j] = 0;
        int i_ = i;
        int idx = 0;
        while (i_) {
            if (i_ % 2 == 1) {
                int siz = (int)s[idx].size();
                for (int j = 0; j < siz; j++) cnt[s[idx][j] - 'a']++;
            }
            i_ /= 2;
            idx++;
        }

        int an = 0;
        for (int j = 0; j < 26; j++) if (cnt[j] == k) an++;
        ans = max(an, ans);
    }

    cout << ans << endl;

    return 0;
}
