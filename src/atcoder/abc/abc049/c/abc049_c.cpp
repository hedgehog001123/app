#include <bits/stdc++.h>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    string s;
    cin >> s;

    reverse(s.begin(), s.end());
    for(int i = 0; i < 4; i++) reverse(divide[i].begin(), divide[i].end());

    bool ok = true;

    for(int i = 0; i < s.size();) {
        bool ok2 = false;
        for (int j = 0; j < 4; j++) {
            string d = divide[j];
            if (s.substr(i, d.size()) == d) {
                ok2 = true;
                i += d.size();
            }
        }
        if(!ok2) {
            ok = false;
            break;
        }
    }

    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
