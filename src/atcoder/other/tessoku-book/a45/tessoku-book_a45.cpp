#include <bits/stdc++.h>
using namespace std;

// Wを0, Bを1, Rを2とすると、加算してmod3

int main() {
    int n;
    char s;
    string t;
    cin >> n >> s >> t;
    int cnt = 0;
    char color[3] = {'W', 'B', 'R'};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            if (color[j] == t[i]) cnt += j;
        }
        cnt %= 3;
    }

    if (color[cnt] == s) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
