#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    bool exist_o = false, exist_x = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') exist_o = true;
        if (s[i] == 'x') exist_x = true;
    }

    if (exist_o && !exist_x) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
