#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool ok = true;
    if (!('A'<=s[0]&&s[0]<='Z')) ok = false;
    if (!('A'<=s[7]&&s[7]<='Z')) ok = false;
    if (!('1'<=s[1]&&s[1]<='9')) ok = false;
    for (int i = 2; i <= 6; i++) {
        if (!('0'<=s[i]&&s[i]<='9')) ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
