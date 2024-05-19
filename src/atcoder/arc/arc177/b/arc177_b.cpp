#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    string ans = "";
    bool is_one = false;
    bool is_zero = false;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '1' && !is_one) {
            for (int j = 0; j <= i; j++) {
                cnt++;
                ans += 'A';
                is_one = true;
                is_zero = false;
            }
        }
        if (s[i] == '0' && ans != "" && !is_zero) {
            for (int j = 0; j <= i ; j++) {
                cnt++;
                ans += 'B';
                is_one = false;
                is_zero = true;
            }
        }
    }

    cout << cnt << endl;
    cout << ans << endl;

    return 0;
}
