#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> m1(n), m2(n);

    int streak_a = 1;
    m1[0] = 1;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'A') {
            streak_a++;
        }
        else if (s[i] == 'B') {
            streak_a = 1;
        }
        m1[i + 1] = streak_a;
    }

    int streak_b = 1;
    m2[n-1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == 'A') {
            streak_b = 1;
        }
        else if (s[i] == 'B') {
            streak_b++;
        }
        m2[i] = streak_b;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += max(m1[i], m2[i]);
    }

    cout << ans << endl;

    return 0;
}
