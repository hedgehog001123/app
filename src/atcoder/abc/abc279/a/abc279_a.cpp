#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == 'v') cnt += 1;
        if (s[i] == 'w') cnt += 2;
    }
    cout << cnt << endl;

    return 0;
}
