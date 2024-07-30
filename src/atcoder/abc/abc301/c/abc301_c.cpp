#include <bits/stdc++.h>
using namespace std;

int s_cnt[30];
int t_cnt[30];

// abcde fghij klmno pqrst uvwxy z

int main() {
    string s, t;
    cin >> s >> t;
    int n = (int)s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '@') s_cnt[0]++;
        else s_cnt[1+s[i]-'a']++;

        if (t[i] == '@') t_cnt[0]++;
        else t_cnt[1+t[i]-'a']++;
    }

    bool ok = true;
    for (int i = 0; i <= 26; i++) {
        if (i == 0) continue;
        else if (i == 1 || i == 3 || i == 4 || i == 5 || i == 15 || i == 18 || i == 20) {
            if (s_cnt[i] < t_cnt[i]) {
                s_cnt[0] -= (t_cnt[i] - s_cnt[i]);
            }
            else if (s_cnt[i] > t_cnt[i]) {
                t_cnt[0] -= (s_cnt[i] - t_cnt[i]);
            }
        }
        else {
            if (s_cnt[i] != t_cnt[i]) ok = false;
        }
        // cout <<char('a'+i-1)<<" "  <<s_cnt[i] << " " << t_cnt[i]<<endl;
    }

    if (s_cnt[0] != t_cnt[0] || s_cnt[0] < 0) ok = false;

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
