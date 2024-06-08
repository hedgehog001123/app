#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3]) {
        cout << "Weak" << endl;
        return 0;
    }

    // for (int i = 0; i < 4; i++) cout << s[i] - '0' << endl;

    int CurrentNum = s[0] - '0';
    for (int i = 1; i < 4; i++) {
        if ((CurrentNum + 1) % 10 != s[i] - '0') {
            break;
        }
        if (i == 3) {
            cout << "Weak" << endl;
            return 0;
        }
        CurrentNum = s[i] - '0';
    }

    cout << "Strong" << endl;

    return 0;
}
