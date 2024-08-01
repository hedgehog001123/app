#include <bits/stdc++.h>
using namespace std;

char ans[201010];

int main() {
    int n;
    string s;
    cin >> n >> s;

    int idx = -1; // 注目してるindex
    int cnt = 0; // 現在の'('の数。')'があるとデクリメント
    for (int i = 0; i < n; i++) {
        idx++;
        if (s[i] == ')' && cnt > 0) {
            while (true) {
                idx--;
                if (ans[idx] == '(') {
                    cnt--;
                    idx--;
                    break;
                }
            }
        }
        else {
            ans[idx] = s[i];
            if (s[i] == '(') cnt++;
        }
    }

    for (int i = 0; i <= idx; i++) cout << ans[i];
    cout << endl;

    return 0;
}
