#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = "oxxoxxoxxoxxoxx";
    int n = (int)s.size();
    
    bool ok = false;
    for (int i = 0; i < 3; i++) {
        bool tmp = true;
        for (int j = 0; j < n; j++) {
            if (s[j] != t[j+i]) tmp = false; 
        }
        if (tmp == true) ok = true;
    }

    if (ok == true) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
