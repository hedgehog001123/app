#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> retsu(7);
    retsu[0] = s[6]-'0';
    retsu[1] = s[3]-'0';
    retsu[2] = s[7]-'0' + s[1]-'0';
    retsu[3] = s[4]-'0' + s[0]-'0';
    retsu[4] = s[8]-'0' + s[2]-'0';
    retsu[5] = s[5]-'0';
    retsu[6] = s[9]-'0';

    if (s[0] == '1') {
        cout << "No" << endl;
        return 0;
    }

    bool a = false, b = false, c = false;
    for (int i = 0; i < 7; i++) {
        if (a == false) {
            if (retsu[i] >= 1) a = true;
        }
        else if (b == false) {
            if (retsu[i] == 0) b = true;
        }
        else if (c == false) {
            if (retsu[i] >= 1) c = true;
        }
    }

    if (c) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
