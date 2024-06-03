#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool Answer = false;
    for (int i = 0; i < n-2; i++) {
        if (s[i] == 'R' && s[i+1] == 'R' && s[i+2] == 'R') Answer = true;
        if (s[i] == 'B' && s[i+1] == 'B' && s[i+2] == 'B') Answer = true;
    }
    
    if (Answer) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
