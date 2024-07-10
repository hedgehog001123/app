#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    map<string, int> m;

    for (int i = 0; i < n; i++) {
        m[s[i]]++;
        if (m[s[i]] == 1) cout << s[i] << endl;
        else cout << s[i] << "(" << m[s[i]]-1 << ")" << endl;
    }

    return 0;
}
