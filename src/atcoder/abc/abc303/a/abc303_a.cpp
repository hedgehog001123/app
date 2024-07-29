#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s, t;
    cin >> n >> s >> t;
    bool similiar = true;

    for (int i = 0; i < n; i++) {
        bool ok = false;
        if (s[i] == t[i]) ok = true;
        if (s[i] == '1' && t[i] == 'l' || s[i] == 'l' && t[i] == '1') ok = true;
        if (s[i] == '0' && t[i] == 'o' || s[i] == 'o' && t[i] == '0') ok = true;

        if (!ok) similiar = false; 
    }

    if (similiar) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
