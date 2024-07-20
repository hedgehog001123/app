#include <bits/stdc++.h>
using namespace std;

// (と)の文字列→2^20通り

int main() {
    int n;
    cin >> n;

    vector<string> ans;
    for (int i = 0; i < (1 << n); i++) {
        string s = "";
        for (int j = n-1; j >= 0; j--) {
            if (i & (1 << j)) s += ")";
            else s += "(";
        }
        
        int cnt = 0;
        bool ok = true;
        for (int j = 0; j < n; j++) {
            if (s[j] == '(') {
                cnt++;
            }
            else {
                if (cnt == 0) ok = false;
                cnt--;
            }
        }
        if (ok && cnt == 0) cout << s << endl;
    }

    return 0;
}
