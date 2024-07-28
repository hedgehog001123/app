#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = (int)s.size();
    int a = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') a += i;
    }
    int b = 0;
    for (int i = 0; i < n; i++) {
        if (b == 0 && s[i] == 'R') b++;
        else if (b == 1 && s[i] == 'K') b++;
        else if (b == 2 && s[i] == 'R') b++;
    }

    bool ok = true;
    if (a % 2 == 0 || b != 3) ok = false;

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
