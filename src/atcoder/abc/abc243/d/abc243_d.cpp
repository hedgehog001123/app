#include <bits/stdc++.h>
using namespace std;

// U...cur / 2
// L...cur * 2
// R...cur * 2 + 1

int main() {
    long long n, x;
    string s;
    cin >> n >> x >> s;

    string bin = "";
    while (x) {
        if (x % 2 == 0) bin = "0" + bin;
        else bin = "1" + bin;
        x /= 2;
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == 'U') {
            bin.pop_back();
        }
        if (s[i] == 'R') {
            bin.push_back('1');
        }
        if (s[i] == 'L') {
            bin.push_back('0');
        }
        // cout << bin << endl;
    }

    long long ans = 0;
    for (int i = 0; i < bin.size(); i++) {
        ans *= 2LL;
        if (bin[i] == '1') {
            ans += 1LL;
        }
    }
    cout << ans << endl;

    return 0;
}
