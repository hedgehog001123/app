#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 1) {
        cout << s << endl;
        return 0;
    }

    vector<bool> exist(n-1);
    for (int i = 0; i < n-1; i++) exist[i] = false;
    for (int i = 0; i < n-1; i++) {
        if (s[i] == 'n' && s[i+1] == 'a') exist[i] = true;
    }
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (exist[i] == true) {
            ans = ans + "ny";
        }
        else {
            ans = ans + s[i];
        }
    }

    cout << ans << endl;

    return 0;
}
