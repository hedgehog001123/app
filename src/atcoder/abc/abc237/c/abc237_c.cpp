#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = (int)s.size();
    int x = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') x++;
        else break;
    }
    int y = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'a') y++;
        else break;
    }

    if (x == n) {
        cout << "Yes" << endl;
        return 0;
    }
    if (x > y) {
        cout << "No" << endl;
        return 0;
    }
    for (int i = x; i < (n - y); i++) {
        if (s[i] != s[x + n - y - i - 1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
