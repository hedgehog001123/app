#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = -1;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == 'a') ans = i + 1;
    }
    cout << ans << endl;

    return 0;
}
